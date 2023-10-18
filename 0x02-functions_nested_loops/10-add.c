#include "main.h"

/**
 * add - function adds two integers
 *
 * @x: function parameter
 *
 * @y: function parameter
 *
 * Return: 
*/

int add(int x, int y)
{
	int sum = x + y;

	if (sum < 10)
		_putchar((sum / 10) + 48);
	else
	{
		_putchar((sum / 10) + 48);
		_putchar((sum % 10) + 48);
	}
	return (0);
}
