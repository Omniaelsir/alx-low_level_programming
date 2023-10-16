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
	int y;

	if (x < 0)
		y = -1 * (x % 10);
	else
		y = x % 10;

	_putchar(y + 48);
	return (0);
}
