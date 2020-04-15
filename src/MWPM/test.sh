#!/bin/bash

set -e

TILINGS=" pst wst bst \
          bbr cbs cdq cds ctn dia ete fsf ftw hms mab mcf mco mgc pcu pte pyr qtz-x \
          rtw sda smt srs swl sxd tfa tph ttv vck unj"

for lattice in ${TILINGS}; do
  ../../bin/mwpm-$lattice 3 3e-3 3e-3 3e-3 10000 fixed
done

echo ""
echo "End of test. No programs returned errors."
