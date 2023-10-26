#include <stdio.h>

/**
 * _pow_recursion - returns x to power y
 *
 * @x: function parameter
 *
 * @y: function paramter
 *
 * Return: returns x to power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	x *= _pow_recursion(x, y - 1);
	return (x);

}
