import numpy as np
import matplotlib.pyplot as plt
import sys
import glob

results08 = {}
indexlist08 = []

xmin = .0075
xmax = .0075

for filename in glob.glob("cdq-08-*.txt"):
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

for filename in glob.glob("cdq-10-*.txt"):
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

results12 = {}
indexlist12 = []

for filename in glob.glob("cdq-12-*.txt"):
    input_file12 = open(filename, "r")
    for line in input_file12:
        data12 = line.split()
        if data12[0] != "#":
            pz_str12 = data12[2]
            rate_str12 = data12[5]
            pz12 = float(pz_str12)
            rate12 = float(rate_str12)
            if xmin>pz12:
                xmin = pz12
            if xmax<pz12:
                xmax = pz12
            if pz_str12 not in indexlist12:
                results12[pz_str12] = []
                indexlist12.append(pz_str12)
            results12[pz_str12].append(rate12)

x_axis12 = []
y_axis12 = []

for item in indexlist12:
    x_axis12.append(float(item))
    y_axis12.append(np.mean(results12[item]))


plt.figure()
plt.title("Lattice cdq under purely dephasing error")
plt.tick_params(labelright=True, right=True, top=True)
plt.xlim(.975*xmin, 1.025*xmax)
plt.ylim(0., 0.55)
plt.scatter(x_axis08, y_axis08, label="L = 8")
plt.scatter(x_axis10, y_axis10, label="L = 10")
plt.scatter(x_axis12, y_axis12, label="L = 12")
plt.legend(loc=2);
plt.ylabel("Failure rate")
plt.xlabel("$p_z$")
plt.savefig("cdq.pdf")
plt.close()
