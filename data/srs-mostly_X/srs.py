import numpy as np
import matplotlib.pyplot as plt
import sys
import glob

results08 = {}
indexlist08 = []

xmin = .006
xmax = .006

for filename in glob.glob("srs-08-*.txt"):
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

for filename in glob.glob("srs-10-*.txt"):
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

results06 = {}
indexlist06 = []

for filename in glob.glob("srs-06-*.txt"):
    input_file06 = open(filename, "r")
    for line in input_file06:
        data06 = line.split()
        if data06[0] != "#":
            px_str06 = data06[1]
            rate_str06 = data06[5]
            px06 = float(px_str06)
            rate06 = float(rate_str06)
            if xmin>px06:
                xmin = px06
            if xmax<px06:
                xmax = px06
            if px_str06 not in indexlist06:
                results06[px_str06] = []
                indexlist06.append(px_str06)
            results06[px_str06].append(rate06)

x_axis06 = []
y_axis06 = []

for item in indexlist06:
    x_axis06.append(float(item))
    y_axis06.append(np.mean(results06[item]))


plt.figure()
plt.title("Lattice srs under predominantly X errors")
plt.tick_params(labelright=True, right=True, top=True)
plt.xlim(.995*xmin, 1.005*xmax)
plt.ylim(0., 0.55)
plt.scatter(x_axis06, y_axis06, label="L = 6")
plt.scatter(x_axis08, y_axis08, label="L = 8")
plt.scatter(x_axis10, y_axis10, label="L = 10")
plt.legend(loc=2);
plt.ylabel("Failure rate")
plt.xlabel("$p_x=10 p_x=10 p_{SPAM}$")
plt.savefig("srs.pdf")
plt.close()
