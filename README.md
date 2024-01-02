# crystal-thresholds
Code and data for calculating the thresholds of the fault-tolerant cluster states used in the research paper https://arxiv.org/abs/1909.11817

## Installation

The C++ code needs to be compiled with `g++` before use. It depends on external
packages that cannot be reditributed in this repository, and have to be manually
installed.

### Installing external packages

A random number generator and a minimum weight perfect matching package are
necessary to run these simulations.

For random number generation, we recommend the Marsenne twister
[RngStreams for C++](http://www.iro.umontreal.ca/~lecuyer/myftp/streams00/c++/).
If you want to use it, create a directory `contrib/RngStream` and place the
files `RngStream.h` and `RngStream.cpp` there:
```shell
cd contrib
mkdir RngStream
cd RngStream
curl http://www.iro.umontreal.ca/~lecuyer/myftp/streams00/c++/RngStream.h -o RngStream.h
curl http://www.iro.umontreal.ca/~lecuyer/myftp/streams00/c++/RngStream.cpp -o RngStream.cpp
```

For perfect matching, we recommend
[Blossom V](http://pub.ist.ac.at/~vnk/software.html#BLOSSOM5), which is
available for non-commercial research purposes. If you want to use it, unpack it
into the `contrib/` directory to create a folder `blossom5-v2.05.src` with the
required contents.
```shell
cd contrib
curl https://pub.ista.ac.at/~vnk/software/blossom5-v2.05.src.tar.gz -o blossom5-v2.05.src.tar.gz
tar xf blossom5-v2.05.src.tar.gz
```

**Note:** If you need to calculate this kind of threshold for commercial
purposes, you will need to acquire your own replacements for these external
packages, and change the code accordingly. Moreover, **I will not be able to
assist you if you intend to use this software for commercial purposes.**

### Compiling

The script `src/MWPM/make.sh` compiles the binaries and populates the `bin/`
folder:
```shell
cd src/MWPM
sh make.sh
```

It creates one binary per lattice in `bin/`. The threshold for each lattice
requires many runs of the simulations, and so these binaries are best executed
in a cluster.

## External data

The data at `lib/lattices` and `lib/tilings` was extracted from
[sytre](http://rcsr.net/systre) and Gavrog.

It is converted into C++ files with the Python script at `lib/src/make.py`.

## Usage

Call the binary that is appropriate for the lattice that you want to simulate
with:
```shell
./bin/mwpm-[lattice] [L] [p_x] [p_z] [p_spam] [trials] [red_edge] > [output_file]
```

The parameters are:
- `L` : Side size of the cluster.
- `p_x` : X error probability.
- `p_z` : Z error probability.
- `p_spam` : SPAM error probability.
- `trials` : Number of trials to run.
- `red_edge` : One of the following: `none`, `fixed`, `sequential`, or `random`.

The output is sent to `stdout`, so `> [output_file]` writes it to your desired
location.
