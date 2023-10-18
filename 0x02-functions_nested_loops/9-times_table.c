#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
*/

void times_table(void)
{
	int x, y;
	int sum;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			sum = x * y;

			_putchar(',');
			_putchar(' ');

			if (sum < 10)
			{
				_putchar(' ');
			}

			else
			{
				_putchar((sum / 10) + 48);
			}

			_putchar((sum % 10) + 48);
		}
		_putchar('\n');
	}
}
