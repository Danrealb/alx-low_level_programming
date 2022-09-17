#include <stdio.h>
/*
 * File: 100-print_comb3.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i < j)

				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
