#include "main.h"

/**
 *
 * strcat - function that concatenates two strings
 *
 * @src: second string to copy from
 * @dest: string to be overwritten
 *
 * Description: concatenates src to end of dest
 *
 * return- always dest
 **/

char *_strcat(char *dest, char *src)

{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)

	{
		dest[i] = src[j];

		i++;
	}

	dest[i] = src[j];


	return (dest);
}
