#include "main.h"


/**
 * print_rev - prints in reverse
 * @s: string to reverse
 * Description: prints string in reverse to stdout
 * Return: nothing
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
