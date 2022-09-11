#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Positive or negative - print sign of random number
 * @void: empty parameter list for man
 *
 * Description: this if /else statement delares the sign (Positive or negative)
 *
 * return: 0 for success
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)

	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
