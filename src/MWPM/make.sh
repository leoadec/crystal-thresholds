#!/bin/bash

FLAGS=""

# Uncomment line below for debug mode
# FLAGS=" -DDEBUG "

LATTICES="bbr cbs cdq cds ctn dia est ete fsf ftw gsi hms hst lcy mab mcf mco mgc \
 				pcu pte pyr qtz-x rtw sda smt srs sto svn swl sxd tfa tfc ths tph ttv \
				vck vtx unj \
        bst pst wst"

g++ $FLAGS -c Main.cpp -o Main.o

g++ $FLAGS -c ../include/UnitCell.cpp -o UnitCell.o
g++ $FLAGS -c ../include/Lattice.cpp -o Lattice.o
g++ $FLAGS -c CompleteGraph.cpp -o CompleteGraph.o

g++ $FLAGS -c ../../contrib/blossom5-v2.05.src/MinCost/MinCost.cpp -o MinCost.o
g++ $FLAGS -c ../../contrib/blossom5-v2.05.src/PMduals.cpp -o PMduals.o
g++ $FLAGS -c ../../contrib/blossom5-v2.05.src/PMexpand.cpp -o PMexpand.o
g++ $FLAGS -c ../../contrib/blossom5-v2.05.src/PMinit.cpp -o PMinit.o
g++ $FLAGS -c ../../contrib/blossom5-v2.05.src/PMinterface.cpp -o PMinterface.o
g++ $FLAGS -c ../../contrib/blossom5-v2.05.src/PMmain.cpp -o PMmain.o
g++ $FLAGS -c ../../contrib/blossom5-v2.05.src/PMshrink.cpp -o PMshrink.o

g++ $FLAGS -c ../../contrib/RngStream/RngStream.cpp -o RngStream.o

EXTERNAL="MinCost.o \
          PMduals.o PMexpand.o PMinit.o PMinterface.o PMmain.o PMshrink.o \
          RngStream.o"
OBJS="Lattice.o UnitCell.o CompleteGraph.o Main.o"

for lattice in $LATTICES; do
  g++ -c ../../lib/include/$lattice.cpp -o $lattice.o
  g++ -Wall -o ../../bin/mwpm-$lattice -O3 $OBJS $EXTERNAL $lattice.o
done

rm *.o
