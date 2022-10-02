#include <stdio.>

gcc -Wall -pedantic -Warror -Wextra -c *.c
ar - rc liball.a *.c
ranlib liball.a
