import numpy as np
import matplotlib.pyplot as plt
import sys
import glob
import scipy.optimize


lattices = {}

lattices["dephasing"] = ["bbr", "cbs", "cds", "ete", "fsf", "ftw", "hms", "hst",
    "lcy", "mab", "mcf", "mco", "mgc", "pcu", "pte", "pyr", "qtz-x", "rtw", "sda",
    "smt", "swl", "sxd", "tfa", "ths", "tph", "ttv", "unj", "vck", "vtx", "wst"]
lattices["SPAM-seq"] = ["wst"]

marker = ["o", "^", "s", "p", "v", "D"]
colorset = ["red", "orange", "blue", "coral", "peru", "indigo"]

even_sizes = {}
even_sizes["dephasing"] = {}
even_sizes["dephasing"]["bbr"] = ["08", "10", "12"]
even_sizes["dephasing"]["cbs"] = ["10", "12", "14"]
even_sizes["dephasing"]["cds"] = ["12", "14", "16"]
even_sizes["dephasing"]["ete"] = ["06", "08", "10"]
even_sizes["dephasing"]["fsf"] = ["10", "12", "14"]
even_sizes["dephasing"]["ftw"] = ["12", "14", "16"]
even_sizes["dephasing"]["hms"] = ["12", "14", "16"]
even_sizes["dephasing"]["hst"] = ["08", "10", "12"]
even_sizes["dephasing"]["lcy"] = ["10", "12", "14"]
even_sizes["dephasing"]["mab"] = ["14", "16", "18"]
even_sizes["dephasing"]["mcf"] = ["08", "10", "12"]
even_sizes["dephasing"]["mco"] = ["08", "10", "12"]
even_sizes["dephasing"]["mgc"] = ["06", "08", "10"]
even_sizes["dephasing"]["pcu"] = ["16", "18", "20"]
even_sizes["dephasing"]["pte"] = ["10", "12", "14"]
even_sizes["dephasing"]["pyr"] = ["08", "10", "12"]
even_sizes["dephasing"]["qtz-x"] = ["12", "14", "16"]
even_sizes["dephasing"]["rtw"] = ["08", "10", "12"]
even_sizes["dephasing"]["sda"] = ["10", "12", "14"]
even_sizes["dephasing"]["smt"] = ["10", "12", "14"]
even_sizes["dephasing"]["swl"] = ["06", "08", "10"]
even_sizes["dephasing"]["sxd"] = ["10", "12", "14"]
even_sizes["dephasing"]["tfa"] = ["08", "10", "12"]
even_sizes["dephasing"]["ths"] = ["08", "10", "12"]
even_sizes["dephasing"]["tph"] = ["06", "08", "10"]
even_sizes["dephasing"]["ttv"] = ["08", "10", "12"]
even_sizes["dephasing"]["unj"] = ["08", "10", "12"]
even_sizes["dephasing"]["vck"] = ["06", "08", "10"]
even_sizes["dephasing"]["vtx"] = ["08", "10", "12"]
even_sizes["dephasing"]["wst"] = ["14", "16", "18"]

even_sizes["SPAM-seq"] = {}
even_sizes["SPAM-seq"]["wst"] = ["12", "14", "16"]

odd_sizes = {}
odd_sizes["dephasing"] = {}
odd_sizes["dephasing"]["bbr"] = ["07", "09", "11"]
odd_sizes["dephasing"]["cbs"] = ["11", "13", "15"]
odd_sizes["dephasing"]["cds"] = ["13", "15", "17"]
odd_sizes["dephasing"]["ete"] = ["07", "09", "11"]
odd_sizes["dephasing"]["fsf"] = ["11", "13", "15"]
odd_sizes["dephasing"]["hms"] = ["13", "15", "17"]
odd_sizes["dephasing"]["ftw"] = ["11", "13", "15"]
odd_sizes["dephasing"]["hst"] = ["07", "09", "11"]
odd_sizes["dephasing"]["lcy"] = ["09", "11", "13"]
odd_sizes["dephasing"]["mab"] = ["13", "15", "17"]
odd_sizes["dephasing"]["mcf"] = ["09", "11", "13"]
odd_sizes["dephasing"]["mco"] = ["07", "09", "11"]
odd_sizes["dephasing"]["mgc"] = ["07", "09", "11"]
odd_sizes["dephasing"]["pcu"] = ["17", "19", "21"]
odd_sizes["dephasing"]["pte"] = ["09", "11", "13"]
odd_sizes["dephasing"]["pyr"] = ["07", "09", "11"]
odd_sizes["dephasing"]["qtz-x"] = ["11", "13", "15"]
odd_sizes["dephasing"]["rtw"] = ["09", "11", "13"]
odd_sizes["dephasing"]["sda"] = ["11", "13", "15"]
odd_sizes["dephasing"]["smt"] = ["09", "11", "13"]
odd_sizes["dephasing"]["swl"] = ["07", "09", "11"]
odd_sizes["dephasing"]["sxd"] = ["11", "13", "15"]
odd_sizes["dephasing"]["tfa"] = ["09", "11", "13"]
odd_sizes["dephasing"]["ths"] = ["07", "09", "11"]
odd_sizes["dephasing"]["tph"] = ["05", "07", "09"]
odd_sizes["dephasing"]["ttv"] = ["09", "11", "13"]
odd_sizes["dephasing"]["unj"] = ["09", "11", "13"]
odd_sizes["dephasing"]["vck"] = ["07", "09", "11"]
odd_sizes["dephasing"]["vtx"] = ["07", "09", "11"]
odd_sizes["dephasing"]["wst"] = ["13", "15", "17"]

odd_sizes["SPAM-seq"] = {}
odd_sizes["SPAM-seq"]["wst"] = ["13", "15"]


models = ["dephasing", "SPAM-seq"]

label = {}
label["dephasing"] = r"$p_Z$"
label["equal"] = r"$p_Z=p_X=p_m$"
# label["mostly_X"] = r"$p_X= 10 p_Z = 10 p_m$"
label["mostly_Z"] = r"$p_Z= 10 p_X = 10 p_m$"
label["SPAM-seq"] = r"$p_m= 10 p_X = 10 p_Z$"

report_file = open("../report/report.txt", "w")

def fit_function (X, pTh, nu, A, B):
    x, L = X
    xEff = (x-pTh)*(L**nu)
    return A + B*xEff

def rescaled_function (xEff, A, B):
    return A + B*xEff

for model in models:
    threshold_even = {}
    threshold_even_error = {}
    vertex_degree = {}
    vertex_degree_med = {}
    vertex_degree_error = {}
    face_girth = {}
    face_girth_med = {}
    face_girth_error = {}

    threshold_odd = {}
    threshold_odd_error = {}

    time_even = {}
    time_odd = {}
    for lattice in lattices[model]:
      united_fig = plt.figure()
      uax = united_fig.add_subplot(111)
      uax.set_ylabel("Failure rate")
      uax.set_xlabel("Rescaled x variable")
      uax.grid(color="grey", linestyle="-", linewidth="0.1")

      u_results = {}

      ux1_data = []
      ux2_data = []
      uy_data = []

      uside_list = []

      for parity in range(2):
        if (parity==0):
          size_list = even_sizes[model][lattice]
          affix = "even"
          time_even[lattice] = {}
        if (parity==1):
          size_list = odd_sizes[model][lattice]
          affix = "odd"
          time_odd[lattice] = {}
        fig = plt.figure()
        ax = fig.add_subplot(111)
        ax.set_ylabel("Failure rate")
        ax.set_xlabel(label[model])
        ax.grid(color="grey", linestyle="-", linewidth="0.1")

        joint_fig = plt.figure()
        jax = joint_fig.add_subplot(111)
        jax.set_ylabel("Failure rate")
        jax.set_xlabel("Rescaled x variable")
        jax.grid(color="grey", linestyle="-", linewidth="0.1")

        xmin = 0
        xmax = 0
        ymin = 0
        ymax = 0
        x1_data = []
        x2_data = []
        y_data = []
        marker_counter  = 0
        avg_degree = 0
        med_degree = 0
        max_degree = 0
        min_degree = 0
        avg_girth = 0
        med_girth = 0
        max_girth = 0
        min_girth = 0

        for L in size_list:
            if (parity==0):
                time_even[lattice][L] = 0
            if (parity==1):
                time_odd[lattice][L] = 0

            results = {}
            indexlist = []

            N = {}
            for filename in glob.glob("../../data2/" + lattice + "-" + model + "/" + lattice + "-" + L + "-*.txt"):
                inputfile = open(filename, "r")
                for line in inputfile:
                    data = line.split()
                    if (len(data)>8):
                        if (data[1] == "Average" and data[8] == "black"):
                            avg_degree = float(data[-1])
                        if (data[1] == "Median" and data[8] == "black"):
                            med_degree = float(data[-1])
                        if (data[1] == "Minimum" and data[8] == "black"):
                            min_degree = float(data[-1])
                        if (data[1] == "Maximum" and data[8] == "black"):
                            max_degree = float(data[-1])
                    if (len(data)>5):
                        if (data[1] == "Average" and data[5] == "edges"):
                            avg_girth = float(data[-1])
                        if (data[1] == "Median" and data[5] == "edges"):
                            med_girth = float(data[-1])
                        if (data[1] == "Minimum" and data[5] == "edges"):
                            min_girth = float(data[-1])
                        if (data[1] == "Maximum" and data[5] == "edges"):
                            max_girth = float(data[-1])
                        if (data[1] == "Time" and (data[5] == "Blossom" or data[3] == "correcting")):
                            if (parity==0):
                                time_even[lattice][L] += float(data[-1][:-1])
                            if (parity==1):
                                time_odd[lattice][L] += float(data[-1][:-1])
                    if data[0] != "#":
                        rate_str = data[5]
                        p_str = data[2]

                        if model == "mostly_X":
                            p_str = data[1]
                        if model == "SPAM-seq":
                            p_str = data[3]
                        p = float(p_str)
                        rate = float(rate_str)
                        if p_str not in indexlist:
                            results[p_str] = []
                            N[p_str] = 0
                            indexlist.append(p_str)
                            if xmin == 0:
                                xmin = p
                                xmax = p
                                ymin = rate
                                ymax = rate
                        results[p_str].append(rate)

                        N[p_str] += int(data[4])

                        if xmin>p:
                            xmin = p
                        if xmax<p:
                            xmax = p
                        if ymin>rate:
                            ymin = rate
                        if ymax<rate:
                            ymax = rate

            for x, y in N.items():
              if (y<1000000 and model=="dephasing"):
                print ("# Less than 1e6 points for lattice " + lattice + " model " + model + ", L = " + L + ", p=" + str(x), )
              if (y<100000 and model!="dephasing"):
                print ("# Less than 1e5 points for lattice " + lattice + " model " + model + ", L = " + L + ", p=" + str(x) )

            mean = []
            x_axis = []
            sigma = []

            u_results.update(results)

            for item in indexlist:
                x_axis.append(float(item))
                mean.append(np.mean(results[item]))

                x1_data.append(float(item))
                ux1_data.append(float(item))
                x2_data.append(int(L))
                ux2_data.append(int(L))
                y_data.append(np.mean(results[item]))
                uy_data.append(np.mean(results[item]))

                if L not in uside_list:
                    uside_list.append(L)

                size = len(results[item])


                sigmas = 0
                for i in range(size):
                    sigmas += (results[item][i])**2.
                sigmas = np.sqrt(sigmas/size - np.mean(results[item])**2.)
                sigma.append(sigmas)

            points = len(indexlist)
            if (parity==0 and points>0):
                time_even[lattice][L] /= points
            if (parity==1 and points>0):
                time_odd[lattice][L] /= points

            ax.errorbar(x_axis, mean, sigma, label = "L = " + str(int(L)),
                fmt=marker[marker_counter], color=colorset[marker_counter])

            marker_counter += 1
        ax.set_xlim(xmin-0.000025, xmax+0.000025)
        ax.set_ylim(np.floor(40*ymin)/40,np.ceil(40*ymax)/40)
        jax.set_ylim(np.floor(40*ymin)/40,np.ceil(40*ymax)/40)
        diff = xmax - xmin
        if diff > 1e-6:
            tick_numbers = np.arange(xmin, xmax+1e-10, 0.0001*np.ceil(diff/0.0016))
            tick_labels = []
            for number in tick_numbers:
                tick_labels.append(str(np.around(100*number, decimals=2)) + "%")
            ax.set_xticks(tick_numbers)
            ax.set_xticklabels(tick_labels)
            ax.set_yticks(np.arange(np.floor(40*ymin)/40,np.ceil(40*ymax)/40+.025,0.025))

        results, precision = scipy.optimize.curve_fit(fit_function, (x1_data, x2_data), y_data, maxfev=2000)

        color_counter = 0
        all_x = np.arange(xmin, xmax+0.00001, 0.00001)
        new_min = 0
        new_max = 0
        for L in size_list:
            all_L = int(L)*np.ones(len(all_x))
            ax.plot(all_x, fit_function((all_x, all_L), results[0], results[1], results[2],
                results[3]), color=colorset[color_counter], linestyle='dotted')
            rescaled_x = []
            rescaled_y = []
            for i in range(len(x1_data)):
                if (x2_data[i]==float(L)):
                    rescaled = (x1_data[i]-results[0])*(float(L)**results[1])
                    if (rescaled<new_min):
                        new_min = rescaled
                    if (rescaled>new_max):
                        new_max = rescaled
                    rescaled_x.append(rescaled)
                    rescaled_y.append(y_data[i])
            jax.scatter(rescaled_x, rescaled_y, label="L = " + L, color=colorset[color_counter], marker=marker[color_counter])
            color_counter += 1

        new_x = np.arange(new_min, new_max+0.00001, 0.00001)
        jax.plot(new_x, rescaled_function(new_x, results[2], results[3]), color="black")

        if (parity==0):
            threshold_even[lattice] = results[0]
            threshold_even_error[lattice] = 2*np.sqrt(precision[0][0])
            vertex_degree[lattice] = avg_degree
            vertex_degree_med[lattice] = med_degree
            vertex_degree_error[lattice] = [[avg_degree-min_degree], [max_degree-avg_degree]]
            face_girth[lattice] = avg_girth
            face_girth_med[lattice] = med_girth
            face_girth_error[lattice] = [[avg_girth-min_girth], [max_girth-avg_girth]]
            report_file.write (lattice + "\t" + model + "\t even \t"
                + str(vertex_degree[lattice]) + "\t" +  str(face_girth[lattice]) + "\t"
                + str(np.around(100*threshold_even[lattice], decimals=3)) +
                "%\t" + str(np.around(100*threshold_even_error[lattice], decimals=3)) + "%\n")
        if (parity==1):
            threshold_odd [lattice] = results[0]
            threshold_odd_error [lattice] = 2*np.sqrt(precision[0][0])
            report_file.write (lattice + "\t" + model + "\t odd \t"
                + str(vertex_degree[lattice]) + "\t" +  str(face_girth[lattice]) + "\t"
                + str(np.around(100*threshold_odd[lattice], decimals=3)) +
                "%\t" + str(np.around(100*threshold_odd_error[lattice], decimals=3)) + "%\n")

        ax.legend(loc=2)
        jax.legend(loc=2)
        fig.savefig(lattice + "-" + model + "-" + affix + ".pdf")
        plt.close(fig)
        jax.set_xlim(new_min-0.0001, new_max+0.0001)
        joint_fig.savefig(lattice + "-" + model + "-" + affix + "-rescaled.pdf")
        plt.close(joint_fig)

        # for item in indexlist:
        #     ux1_data.append(float(item))
        #     ux2_data.append(int((L)))
        #     uy_data.append(np.mean(u_results[item]))

      fit, uprecision = scipy.optimize.curve_fit(fit_function, (ux1_data, ux2_data), uy_data, maxfev=2000)

      color_counter = 0
      all_x = np.arange(xmin, xmax+0.00001, 0.00001)
      new_min = 0
      new_max = 0
      for L in sorted(uside_list):
          all_L = int(L)*np.ones(len(all_x))
          rescaled_x = []
          rescaled_y = []
          for i in range(len(ux1_data)):
              if (ux2_data[i]==float(L)):
                  rescaled = (ux1_data[i]-fit[0])*(float(L)**fit[1])
                  if (rescaled<new_min):
                      new_min = rescaled
                  if (rescaled>new_max):
                      new_max = rescaled
                  rescaled_x.append(rescaled)
                  rescaled_y.append(uy_data[i])
          uax.scatter(rescaled_x, rescaled_y, label="L = " + L, color=colorset[color_counter], marker=marker[color_counter])
          color_counter += 1

      report_file.write (lattice + "\t" + model + "\t all \t"
        + str(vertex_degree[lattice]) + "\t" +  str(face_girth[lattice]) + "\t"
        + str(np.around(100*fit[0], decimals=3)) +
        "%\t" + str(np.around(100*2*np.sqrt(uprecision[0][0]), decimals=3)) + "%\n")

      new_x = np.arange(new_min, new_max+0.00001, 0.00001)
      uax.set_xlim(new_min, new_max)
      uax.legend(loc=2)
      uax.plot(new_x, rescaled_function(new_x, fit[2], fit[3]), color="black")

      united_fig.savefig(lattice + "-" + model + "-rescaled.pdf")
      plt.close(united_fig)

    for type in ["decoder","cluster"]:
        final_fig = plt.figure(figsize=(6,9))
        fax = final_fig.add_subplot(111)

        th_max = 0
        th_min = 0
        fax.errorbar([], [], label="Even L", color="blue", marker="o")
        fax.errorbar([], [], label="Odd L", color="red", marker="s")

        if type=="decoder":
            fax.legend(loc=1)
        if type=="cluster":
            fax.legend(loc=4)

        for name, value in threshold_even.items():
            if type == "decoder":
                fx = vertex_degree[name]
                fx_med = vertex_degree_med[name]
                ferror = vertex_degree_error[name]
            if type == "cluster":
                fx = face_girth[name]
                fx_med = face_girth_med[name]
                ferror = face_girth_error[name]
            fax.errorbar(fx, value, yerr=threshold_even_error[name], xerr=ferror, color="blue", marker="o")
            fax.scatter(fx_med, value, color="blue", marker="x")
            fax.errorbar(fx, threshold_odd[name], yerr=threshold_odd_error[name], xerr=ferror, color="red", marker="s")
            fax.scatter(fx_med, threshold_odd[name], color="red", marker="x")
            fax.text(fx+0.045, value+0.0001, name)

            if th_min == 0:
                th_min = threshold_even[name]
                th_max = threshold_odd[name]
            if th_min > threshold_even[name]:
                th_min = threshold_even[name]
            if th_max < threshold_odd[name]:
                th_max = threshold_odd[name]

        tick_numbers = np.arange(np.floor(2000*th_min)/2000,np.ceil(2000*th_max)/2000+.0005,0.0005)
        tick_labels = []
        for number in tick_numbers:
            tick_labels.append(str(np.around(100*number, decimals=2)) + "%")
        fax.set_yticks(tick_numbers)
        fax.set_yticklabels(tick_labels)

        fax.set_ylim(th_min-0.0004,th_max+0.0004)
        fax.set_xlim(0,12)

        fax.set_xlabel("Vertex degree of the " + type + " graph")
        fax.set_ylabel(model.capitalize() + " threshold")
        fax.grid(color="grey", linestyle="-", linewidth="0.1")

        final_fig.savefig("thresholds-" + model + "-" + type + ".pdf")
        plt.close(final_fig)

    list_of_names = []

    for name, value in time_even.items():
        list_of_names.append(name)

    for j in range(int(np.ceil(len(list_of_names)/10))):
        time_fig = plt.figure()
        tax = time_fig.add_subplot(111)
        tax.scatter([], [], label="Even L", color="blue", marker="o")
        tax.scatter([], [], label="Odd L", color="red", marker="s")
        tax.legend(loc=3)
        tx = 0
        t_xticks = []

        for i in range(10*j,min(len(list_of_names),10*(j+1))):
            name = list_of_names[i]
            tx += 1
            for L, x in time_even[name].items():
                tax.scatter(tx, time_even[name][L], color="blue", marker="o")
                tax.text(tx+0.055, time_even[name][L]+0.0001, "L=" + L)

            for L, x in time_odd[name].items():
                tax.scatter(tx, time_odd[name][L], color="red", marker="s")
                tax.text(tx+0.055, time_odd[name][L]+0.0001, "L=" + L)

            t_xticks.append(name)

        minimum_line = 5e3

        if (model=="dephasing"):
            minimum_line *= 10

        tax.plot (np.arange(-1,tx+2), minimum_line*np.ones(tx+3), color="black", linestyle="dashed")
        tax.set_xlim(.8,tx+0.2)

        tax.set_ylabel("Average compute time per point")
        tax.set_yscale("log")

        tax.set_xticks(np.arange(1,tx+1))
        tax.set_xticklabels(t_xticks)

        time_fig.savefig("time-" + model + "-" + str(j) + ".pdf")
        plt.close(time_fig)

report_file.close()
