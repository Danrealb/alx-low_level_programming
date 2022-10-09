#include "main.h"

 /**
 * main: checks if value is upper case
 *
 * @c: character to be checked
 *
 * Discription: return if uppercase
 * Return: 1 if c is capital, otherwise 0
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
