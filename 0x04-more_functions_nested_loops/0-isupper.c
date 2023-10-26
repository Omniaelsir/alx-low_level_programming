#include "main.h"

/**
 * _isupper - checks if char is uppercase
 *
 * @c: function parameter
 *
 * Return: returns 1 if c is uppercase
 * 	returs 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);

	_putchar('\n');
}
