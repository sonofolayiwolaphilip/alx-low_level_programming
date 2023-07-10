#!/bin/bash

# Compile each .c file into a corresponding .o file
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library from the .o files
ar -rc liball.a *.o

# Generate an index for the static library
ranlib liball.a

