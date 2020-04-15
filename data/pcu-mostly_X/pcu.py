import numpy as np
import matplotlib.pyplot as plt
import sys
import glob

results08 = {}
indexlist08 = []

xmin = .006
xmax = .006

for filename in glob.glob("pcu-08-*.txt"):
    input_file08 = open(filename, "r")
    for line in input_file08:
        data08 = line.split()
        if data08[0] != "#":
            px_str08 = data08[1]
            rate_str08 = data08[5]
            px08 = float(px_str08)
            rate08 = float(rate_str08)
            if xmin>px08:
                xmin = px08
            if xmax<px08:
                xmax = px08
            if px_str08 not in indexlist08:
                results08[px_str08] = []
                indexlist08.append(px_str08)
            results08[px_str08].append(rate08)

x_axis08 = []
y_axis08 = []

for item in indexlist08:
    x_axis08.append(float(item))
    y_axis08.append(np.mean(results08[item]))

results10 = {}
indexlist10 = []

for filename in glob.glob("pcu-10-*.txt"):
    input_file10 = open(filename, "r")
    for line in input_file10:
        data10 = line.split()
        if data10[0] != "#":
            px_str10 = data10[1]
            rate_str10 = data10[5]
            px10 = float(px_str10)
            rate10 = float(rate_str10)
            if xmin>px10:
                xmin = px10
            if xmax<px10:
                xmax = px10
            if px_str10 not in indexlist10:
                results10[px_str10] = []
                indexlist10.append(px_str10)
            results10[px_str10].append(rate10)

x_axis10 = []
y_axis10 = []

for item in indexlist10:
    x_axis10.append(float(item))
    y_axis10.append(np.mean(results10[item]))

results12 = {}
indexlist12 = []

for filename in glob.glob("pcu-12-*.txt"):
    input_file12 = open(filename, "r")
    for line in input_file12:
        data12 = line.split()
        if data12[0] != "#":
            px_str12 = data12[1]
            rate_str12 = data12[5]
            px12 = float(px_str12)
            rate12 = float(rate_str12)
            if xmin>px12:
                xmin = px12
            if xmax<px12:
                xmax = px12
            if px_str12 not in indexlist12:
                results12[px_str12] = []
                indexlist12.append(px_str12)
            results12[px_str12].append(rate12)

x_axis12 = []
y_axis12 = []

for item in indexlist12:
    x_axis12.append(float(item))
    y_axis12.append(np.mean(results12[item]))


plt.figure()
plt.title("Lattice pcu under predominantly X errors")
plt.tick_params(labelright=True, right=True, top=True)
plt.xlim(.995*xmin, 1.005*xmax)
plt.ylim(0., 0.55)
plt.scatter(x_axis08, y_axis08, label="L = 8")
plt.scatter(x_axis10, y_axis10, label="L = 10")
plt.scatter(x_axis12, y_axis12, label="L = 12")
plt.legend(loc=2);
plt.ylabel("Failure rate")
plt.xlabel("$p_x=10p_z=10p_{SPAM}$")
plt.savefig("pcu.pdf")
plt.close()
