#!/bin/bash

LATTICES="bbr cbs cdq cds ctn dia est ete fsf ftw gsi hms hst lcy mab mcf mco mgc \
 				pcu pte pyr qtz-x rtw sda smt srs sto svn swl sxd tfa tfc ths tph ttv \
				vck vtx unj \
        mike"

g++ -c Main.cpp -o Main.o

g++ -c ../include/UnitCell.cpp -o UnitCell.o
g++ -c ../include/Lattice.cpp -o Lattice.o

OBJS="Lattice.o UnitCell.o"

for lattice in $LATTICES; do
  g++ -c ../../lib/include/$lattice.cpp -o $lattice.o
  g++ -Wall -o ../../bin/nz-$lattice Main.o $OBJS $lattice.o
done

rm *.o
