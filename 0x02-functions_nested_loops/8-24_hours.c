#include "main.h"

/**
 * jack_bauer - function prints clock format
 *
 * Return: void
*/

void jack_bauer(void)
{
	int x, y, z, n;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 3; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (n = 0; n <= 9; n++)
				{
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(':');
					_putchar(z + 48);
					_putchar(n + 48);
					_putchar('\n');
				}
			}
		}
	}
}
