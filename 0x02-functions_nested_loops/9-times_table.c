#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
*/

void times_table(void)
{
	int x, y, sum;
	sum == x * y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ( y != 9)
			{
				_putchar(sum + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(sum + 48);
		}
	}
}
