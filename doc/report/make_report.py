import numpy as np

file_input = open("report.txt", "r")

print ("\\documentclass[pra]{revtex4-1} \n \\usepackage{graphicx} \n\\usepackage{color} \n\\begin{document}")

d = {}
g = {}

threshold_even = {}
error_even = {}

threshold_odd = {}
error_odd = {}

threshold = {}
error = {}

lattices = {}
models = []
parities = []

ranking = {}

for line in file_input:
    data = line.split()
    model = data[1]
    if model not in models:
        models.append(model)
        threshold_even[model] = {}
        threshold_odd[model] = {}
        threshold[model] = {}
        error_even[model] = {}
        error_odd[model] = {}
        error[model] = {}
        lattices[model] = []
        ranking[model] = []
    lattice = data[0]
    if lattice not in lattices[model]:
        lattices[model].append(lattice)
        ranking[model].append(lattice)
        for j in reversed(range(len(ranking[model])-1)):
            if threshold[model][ranking[model][j]] < float(data[-2][:-1]):
                ranking[model][j+1] = ranking[model][j]
                ranking[model][j] = lattice
        threshold_even[model][lattice] = {}
        threshold_odd[model][lattice] = {}
        threshold[model][lattice] = {}
        error_even[model][lattice] = {}
        error_odd[model][lattice] = {}
        error[model][lattice] = {}
        d[lattice] = round(float(data[3]),2)
        g[lattice] = round(float(data[4]),2)
    parity = data[2]
    if (parity=="odd"):
        threshold_odd[model][lattice] = float(data[-2][:-1])
        error_odd[model][lattice] = float(data[-1][:-1])
    if (parity=="even"):
        threshold_even[model][lattice] = float(data[-2][:-1])
        error_even[model][lattice] = float(data[-1][:-1])
    if (parity=="all"):
        threshold[model][lattice] = float(data[-2][:-1])
        error[model][lattice] = float(data[-1][:-1])

for model in models:
    print ("\\section*{" + model + "}")

    print ("\\begin{center}")
    print ("\\noindent Dependence of the thresholds on the features of the graph: \n  ")
    print ("\\includegraphics[width=.8\\textwidth]{../graphs-paper2/thresholds-" + model + "-decoder.pdf}\n")
    print ("\\includegraphics[width=.8\\textwidth]{../graphs-paper2/thresholds-" + model + "-cluster.pdf} \\clearpage \n")

    print("\\clearpage")
    print("\\subsection*{Ranking}")
    print("\\begin{tabular}{|c|c|c|c|c|c|} \\hline \\bf Lattice & \\bf Avg $d$ & \\bf Avg $g$ & \\bf Even Threshold & \\bf Odd Threshold  & \\bf Unified Threshold \\\\ \\hline")
    past_d = 0
    for lattice in ranking[model]:
        if (abs(d[lattice]-past_d)>=1.):
            print ("\\hline ")
            past_d = d[lattice]
        color = "red"
        if (abs(threshold_even[model][lattice] - threshold_odd[model][lattice]) < abs(error_even[model][lattice] + error_odd[model][lattice])):
            color = "blue"
        print ("\\color{" + color + "}")
        print (str(lattice) + " &")
        print ("\\color{" + color + "}")
        print (str(d[lattice]) + " &")
        print ("\\color{" + color + "}")
        print (str(g[lattice]) + " &")
        print ("\\color{" + color + "}")
        print (" $(" + str(threshold_even[model][lattice]) + " \\pm "
                + str(error_even[model][lattice]) + ")\% $& ")
        print ("\\color{" + color + "}")
        print ( "$("
                + str(threshold_odd[model][lattice]) + " \\pm "
                + str(error_odd[model][lattice]) + ")\% $ &" )
        print ("\\color{" + color + "}")
        print ( "$("
                + str(threshold[model][lattice]) + " \\pm "
                + str(error[model][lattice]) + ")\% $ \\\\" )


    print("\\hline \\end{tabular}")
    print("\\clearpage")

    print ("\\noindent Precision in terms of compute time: \n  ")
    for i in range(int(np.ceil(len(lattices[model])/10.))):
        print ("\\includegraphics[width=.8\\textwidth]{../graphs-paper2/time-" + model + "-" + str(i) + ".pdf}\n")

    print ("\\end{center} \n")

    for lattice in lattices[model]:
        print ("\\clearpage \n")
        print ("\\subsection*{" + lattice + "}")

        print ("\\noindent Increase of the failure rate with error probability: \n  ")
        print ("\\includegraphics[width=.49\\textwidth]{../graphs-paper2/" + lattice + "-" + model + "-even.pdf}")
        print ("\\includegraphics[width=.49\\textwidth]{../graphs-paper2/" + lattice + "-" + model + "-odd.pdf}\n")

        print ("\\noindent Fitting all points to a linear function $f(x) = A + Bx$, where $x=(p-p_{th})L^{\\nu}$ for some $p_{th}$ and $\\nu$: \n  ")
        print ("\\includegraphics[width=.49\\textwidth]{../graphs-paper2/" + lattice + "-" + model + "-even-rescaled.pdf}")
        print ("\\includegraphics[width=.49\\textwidth]{../graphs-paper2/" + lattice + "-" + model + "-odd-rescaled.pdf}\n")

        print ("\\[  p_{even} = (" + str(threshold_even[model][lattice]) + " \\pm "
            + str(error_even[model][lattice]) + ")\% \\]")
        print ("\\[  p_{odd} = (" + str(threshold_odd[model][lattice]) + " \\pm "
            + str(error_odd[model][lattice]) + ")\% \\]")


        print ("\\clearpage \n")
        print ("Unified fit: \\begin{center} \n")
        print ("\\includegraphics[width=.9\\textwidth]{../graphs-paper2/" + lattice + "-" + model + "-rescaled.pdf}")
        print ("\\[  p_{th} = (" + str(threshold[model][lattice]) + " \\pm "
            + str(error[model][lattice]) + ")\% \\] \\end{center}")

    print ("\\clearpage")


print ("\\end{document}")
