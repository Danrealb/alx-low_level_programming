#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print base 10 numbers
 * @void: Empty parameter list for main.
 *
 * Description: Prints number 0-9
 *
 * Return: 0 for success
 */

int main(void)

{
	int num = '0';

	while (num <= '9')

	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
