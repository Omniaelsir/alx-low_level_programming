#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @x: function parameter
 *
 * Return: returns the absolute value
*/

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		return (x);
	}

	else
		return (x);
}
