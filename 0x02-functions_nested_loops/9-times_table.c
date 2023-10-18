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
		for (y = 0; y <= 9; y++)
		{
			sum = x * y;

			if (sum > 10)
			{
				if (y != 9)
				{
					_putchar((sum / 10) + 48);
					_putchar((sum % 10) + 48);
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar((sum / 10) + 48);
					_putchar((sum % 10) + 48);
			}
			else
			{
				if ( y != 9)
				{
					
					_putchar(sum + 48);
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar(sum + 48)

			}
		}
		_putchar('\n');
	}
}
