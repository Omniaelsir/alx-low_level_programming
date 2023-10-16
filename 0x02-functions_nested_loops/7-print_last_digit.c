#include "main.h"

/**
 * print_last_digit - function prints last digit
 *
 * @x: function array of parameters
 *
 * Return: returns 0 on success
*/

int print_last_digit(int x)
{
	int y[] = x;
	int z = y[-1];

	_putchar(z);
	return (0);
}
