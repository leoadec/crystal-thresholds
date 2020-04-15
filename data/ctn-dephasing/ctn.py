import numpy as np
import matplotlib.pyplot as plt
import sys
import glob

results08 = {}
indexlist08 = []

xmin = .01
xmax = .01

for filename in glob.glob("ctn-08-*.txt"):
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

results06 = {}
indexlist06 = []

for filename in glob.glob("ctn-06-*.txt"):
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

results04 = {}
indexlist04 = []

for filename in glob.glob("ctn-04-*.txt"):
    input_file04 = open(filename, "r")
    for line in input_file04:
        data04 = line.split()
        if data04[0] != "#":
            pz_str04 = data04[2]
            rate_str04 = data04[5]
            pz04 = float(pz_str04)
            rate04 = float(rate_str04)
            if xmin>pz04:
                xmin = pz04
            if xmax<pz04:
                xmax = pz04
            if pz_str04 not in indexlist04:
                results04[pz_str04] = []
                indexlist04.append(pz_str04)
            results04[pz_str04].append(rate04)

x_axis04 = []
y_axis04 = []

for item in indexlist04:
    x_axis04.append(float(item))
    y_axis04.append(np.mean(results04[item]))


plt.figure()
plt.title("Lattice ctn under purely dephasing error")
plt.tick_params(labelright=True, right=True, top=True)
plt.xlim(.995*xmin, 1.005*xmax)
plt.ylim(0., 0.55)
plt.scatter(x_axis04, y_axis04, label="L = 4")
plt.scatter(x_axis06, y_axis06, label="L = 6")
plt.scatter(x_axis08, y_axis08, label="L = 8")
plt.legend(loc=2);
plt.ylabel("Failure rate")
plt.xlabel("$p_z$")
plt.savefig("ctn.pdf")
plt.close()
