#include "main.h"

/**
 * print_line - draws straight line
 *
 * @n: function parameter
 *
 * Returns: void
*/

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
