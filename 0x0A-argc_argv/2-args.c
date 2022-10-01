#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments include the first one
 * @agrc - number of argument
 * @argv - argument entered
 *
 * Description: print all argument enterd
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
