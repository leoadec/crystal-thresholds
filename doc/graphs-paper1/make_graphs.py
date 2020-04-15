import numpy as np
import matplotlib.pyplot as plt
import sys
import glob

lattices = ["pcu", "hms", "cdq", "dia", "srs", "ctn", "bst", "wst"]

marker = ["o", "^", "s"]

sizes = {}
sizes["pcu"] = ["08", "10", "12"]
sizes["hms"] = ["08", "10", "12"]
sizes["cdq"] = ["08", "10", "12"]
sizes["dia"] = ["06", "08", "10"]
sizes["srs"] = ["06", "08", "10"]
sizes["ctn"] = ["04", "06", "08"]
sizes["bst"] = ["04", "06", "08"]
sizes["wst"] = ["06", "08", "10"]

models = ["dephasing", "equal", "mostly_X", "mostly_Z"]
#models = ["dephasing", "equal", "mostly_X", "mostly_Z", "mostly_SPAM"]

label = {}
label["dephasing"] = r"$p_Z$"
label["equal"] = r"$p_Z=p_X=p_m$"
label["mostly_X"] = r"$p_X= 10 p_Z = 10 p_m$"
label["mostly_Z"] = r"$p_Z= 10 p_X = 10 p_m$"
#label["mostly_SPAM"] = r"$p_m= 10 p_X = 10 p_Z$"

for lattice in lattices:
    for model in models:
        plt.figure()
        plt.ylim(0., 0.5)
        plt.ylabel("Failure rate")
        plt.xlabel(label[model])
        plt.grid(color="grey", linestyle="-", linewidth="0.1")
        xmin = 0
        xmax = 0
        marker_counter  = 0
        for L in sizes[lattice]:
            results = {}
            indexlist = []
            for filename in glob.glob("../../data/" + lattice + "-" + model + "/" + lattice + "-" + L + "-*.txt"):
                inputfile = open(filename, "r")
                for line in inputfile:
                    data = line.split()
                    if data[0] != "#":
                        rate_str = data[5]
                        p_str = data[2]
                        if model == "mostly_X":
                            p_str = data[1]
                        if model == "mostly_SPAM":
                            p_str = data[3]
                        p = float(p_str)
                        rate = float(rate_str)
                        if p_str not in indexlist:
                            results[p_str] = []
                            indexlist.append(p_str)
                            if xmin == 0:
                                xmin = p
                                xmax = p
                        results[p_str].append(rate)
                        if xmin>p:
                            xmin = p
                        if xmax<p:
                            xmax = p
            mean = []
            x_axis = []
            sigma = []
            for item in indexlist:
                x_axis.append(float(item))
                mean.append(np.mean(results[item]))
                size = len(results[item])
                sigmas = 0
                for i in range(size):
                    sigmas = sigmas + (results[item][i])**2.
                sigmas = np.sqrt(sigmas/size - np.mean(results[item])**2.)
                sigma.append(sigmas)
            plt.errorbar(x_axis, mean, sigma, label = "L = " + str(int(L)), fmt=marker[marker_counter])
            marker_counter += 1
        plt.xlim(xmin-0.0001, xmax+0.0001)
        diff = xmax - xmin
        if diff > 1e-6:
            tick_numbers = np.arange(xmin, xmax+1e-10, 0.0002*np.ceil(diff/0.0016))
            tick_labels = []
            for number in tick_numbers:
                tick_labels.append(str(np.around(100*number, decimals=2)) + "%")
            plt.xticks(tick_numbers, tick_labels)
        plt.legend(loc=2)
        plt.savefig(lattice + "-" + model + ".pdf")
        plt.close()
