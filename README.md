# crystal-thresholds
Code and data for calculating the thresholds of the fault-tolerant cluster states used in the research paper https://arxiv.org/abs/1909.11817

### External Packages

A random number generator and a minimum weight perfect matching package are necessary to run these simulations.
For random number generation, we recommend the Marsenne twister for C++ available for non-commercial research purposes at:
http://www.iro.umontreal.ca/~lecuyer/myftp/streams00/c++/
For perfect matching, we recommend Blossom V, available for non-commercial research purposes at:
http://pub.ist.ac.at/~vnk/software.html#BLOSSOM5

You should be able to compile the rest of the software if you unpack these packages in the "contrib" directory as "RngStream" and "blossom5-v2.05.src", respectively.
