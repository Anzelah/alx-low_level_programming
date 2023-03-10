#!/bin/bash

#create object files first using this script:

 gcc -c *c

#then create a static library and link files using:

 ar rc liball.a *.o

#then index by running:

 ranlib liball.a

#cleaup using

 rm -f *.o
