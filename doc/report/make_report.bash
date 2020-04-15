#!/bin/bash

python3 make_report.py > report.tex

pdflatex report.tex
