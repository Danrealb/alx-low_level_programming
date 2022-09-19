#include "main.h"

/**
 * swap_int - swap the values of two integer
 * @a: first value
 * @b: second value
 *
 * return: nothing
 *
 **/

void swap_int(int *a, int *b)

{
	int c = *a;
	*a = *b;
	*b = c;
}
