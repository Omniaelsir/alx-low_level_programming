#include "main.h"

/**
 *print_sign - fuction prints sign of a number
 *
 *@n: function parameter
 *
 *Return: return 0 if n is zero
 *	return 1 if n is greater than zero
 *	return -1 if n less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
