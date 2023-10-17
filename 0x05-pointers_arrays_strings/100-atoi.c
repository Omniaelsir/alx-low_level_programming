#include "main.h"

/**
 * _atoi - function that converts string to integer
 *
 * @s: function parameter
 *
 * Return: returns integer converted from string
*/

int _atoi(char *s)
{
	unsigned int number = 0;
	int x = 1;

	do {
		if (*s == '-')
			x *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);

	return (number * x);
}
