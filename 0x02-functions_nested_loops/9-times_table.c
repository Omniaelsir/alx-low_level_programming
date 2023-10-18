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
		for (y = 1; y <= 9; y++)
		{
			_putchar('0');
			sum = x * y;

			if (sum < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(sum + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((sum / 10) + 48);
				_putchar((sum % 10) + 48);

			}
		}
		_putchar('\n');
	}
}
