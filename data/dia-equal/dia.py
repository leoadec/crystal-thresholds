import numpy as np
import matplotlib.pyplot as plt
import sys
import glob

results08 = {}
indexlist08 = []

xmin = .003
xmax = .003

for filename in glob.glob("dia-08-*.txt"):
    input_file08 = open(filename, "r")
    for line in input_file08:
        data08 = line.split()
        if data08[0] != "#":
            pz_str08 = data08[2]
            rate_str08 = data08[5]
            pz08 = float(pz_str08)
            rate08 = float(rate_str08)
            if xmin>pz08:
                xmin = pz08
            if xmax<pz08:
                xmax = pz08
            if pz_str08 not in indexlist08:
                results08[pz_str08] = []
                indexlist08.append(pz_str08)
            results08[pz_str08].append(rate08)

x_axis08 = []
y_axis08 = []

for item in indexlist08:
    x_axis08.append(float(item))
    y_axis08.append(np.mean(results08[item]))

results10 = {}
indexlist10 = []

for filename in glob.glob("dia-10-*.txt"):
    input_file10 = open(filename, "r")
    for line in input_file10:
        data10 = line.split()
        if data10[0] != "#":
            pz_str10 = data10[2]
            rate_str10 = data10[5]
            pz10 = float(pz_str10)
            rate10 = float(rate_str10)
            if xmin>pz10:
                xmin = pz10
            if xmax<pz10:
                xmax = pz10
            if pz_str10 not in indexlist10:
                results10[pz_str10] = []
                indexlist10.append(pz_str10)
            results10[pz_str10].append(rate10)

x_axis10 = []
y_axis10 = []

for item in indexlist10:
    x_axis10.append(float(item))
    y_axis10.append(np.mean(results10[item]))

results06 = {}
indexlist06 = []

for filename in glob.glob("dia-06-*.txt"):
    input_file06 = open(filename, "r")
    for line in input_file06:
        data06 = line.split()
        if data06[0] != "#":
            pz_str06 = data06[2]
            rate_str06 = data06[5]
            pz06 = float(pz_str06)
            rate06 = float(rate_str06)
            if xmin>pz06:
                xmin = pz06
            if xmax<pz06:
                xmax = pz06
            if pz_str06 not in indexlist06:
                results06[pz_str06] = []
                indexlist06.append(pz_str06)
            results06[pz_str06].append(rate06)

x_axis06 = []
y_axis06 = []

for item in indexlist06:
    x_axis06.append(float(item))
    y_axis06.append(np.mean(results06[item]))


plt.figure()
plt.title("Lattice dia under equal errors")
plt.tick_params(labelright=True, right=True, top=True)
plt.xlim(.995*xmin, 1.005*xmax)
plt.ylim(0., 0.55)
plt.scatter(x_axis06, y_axis06, label="L = 6")
plt.scatter(x_axis08, y_axis08, label="L = 8")
plt.scatter(x_axis10, y_axis10, label="L = 10")
plt.legend(loc=2);
plt.ylabel("Failure rate")
plt.xlabel("$p_z=p_x=p_{SPAM}$")
plt.savefig("dia.pdf")
plt.close()
