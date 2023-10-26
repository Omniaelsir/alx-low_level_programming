#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 *
 * Return: void
*/

void more_numbers(void)
{
	int n;
	int b;
	int x;

	for (n = 0; n <= 9; n++)
	{
		for (b = 0; b <= 14; b++)
		{
			x = b;
			if (b > 9)
			{
				_putchar(49);
				x = b % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}

}
