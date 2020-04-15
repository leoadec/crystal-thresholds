#!/bin/bash
#SBATCH --output=NZ.out
#SBATCH --error=NZ.err
#SBATCH -p brownlab-gpu,common
#SBATCH -N 1
#SBATCH -c 1
#SBATCH --mail-type=END
#SBATCH --mail-user=leo.castro@duke.edu
#SBATCH --mem=32G
#SBATCH --array=0-99

LATTICES="bbr cbs cdq cds ctn dia est ete fsf ftw gsi hms hst lcy mab mcf mco mgc \
 				pcu pte pyr qtz-x rtw sda smt srs sto svn swl sxd tfa tfc ths tph ttv \
				vck vtx unj"

for lattice in ${LATTICES}; do
    ../../bin/nz-${lattice} 100 .6 >> ${lattice}.txt
done
