#!/bin/bash

LATTICES="est gsi sto svn tfc"

TILINGS=" bbr cbs cdq cds ctn dia ete fsf ftw hms hst lcy mab mcf mco mgc pcu \
          pte pyr qtz-x rtw sda smt srs swl sxd tfa ths tph ttv unj vck vtx \
          bst pst"

for lattice in $LATTICES; do
  python3 make.py $lattice
done

for tiling in $TILINGS; do
  python3 make.py $tiling True
done
