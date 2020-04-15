#!/bin/bash

for file in $(ls ../../bin/nz*); do
  $file 10 .6
done
