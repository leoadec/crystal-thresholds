import numpy as np
import glob
import sys

LATTICES=["bbr", "cbs", "cdq", "cds", "ctn", "dia", "est", "ete", "fsf", "ftw",
          "gsi", "hms", "hst", "lcy", "mab", "mcf", "mco", "mgc", "pcu", "pte",
          "pyr", "qtz-x", "rtw", "sda", "smt", "srs", "sto", "svn", "swl", "sxd",
          "tfa", "tfc", "ths", "tph", "ttv", "vck", "vtx", "unj"]

max_x = 0.

print ("\\documentclass{article} \n \\begin{document} \n \\section*{Bond percolation} \n \\begin{tabular}{|c|ccc|} ")
print ("\\hline Lattice & $p_c^{1}$ & $p_c^{2}$ & $p_c^{3}$ \\\\ \\hline ")

for lattice_type in LATTICES:
    file_name = lattice_type + ".txt"
    input_file = open(file_name, "r")
    threshold1 = []
    threshold1sq = []
    threshold2 = []
    threshold2sq = []
    threshold3 = []
    threshold3sq = []
    for line in input_file:
        if (line[0] != "#"):
          data = line.split()
          if  (len(data)==4) and(data[1] != "L"):
            threshold1.append(float(data[1]))
            threshold1sq.append(float(data[1])**2.)
            threshold2.append(float(data[2]))
            threshold2sq.append(float(data[2])**2.)
            threshold3.append(float(data[3]))
            threshold3sq.append(float(data[3])**2.)

    mu11 = np.mean(threshold1)
    mu12 = np.mean(threshold1sq)

    sigma1 = np.sqrt(mu12 - mu11**2)

    mu21 = np.mean(threshold2)
    mu22 = np.mean(threshold2sq)

    sigma2 = np.sqrt(mu22 - mu21**2)

    mu31 = np.mean(threshold2)
    mu32 = np.mean(threshold2sq)

    sigma3 = np.sqrt(mu32 - mu31**2)

    print ( lattice_type + " & "
            + str(np.around(mu11,decimals=3)) + "$\\pm$" + str(np.around(2*sigma1,decimals=3)) + " & "
            + str(np.around(mu21,decimals=3)) + "$\\pm$" + str(np.around(2*sigma2,decimals=3)) + " & "
            + str(np.around(mu31,decimals=3)) + "$\\pm$" + str(np.around(2*sigma3,decimals=3)) + " \\\\ " )

print ("\\hline \\end{tabular}\\end{document}")
