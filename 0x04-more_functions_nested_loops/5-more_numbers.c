#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 *
 * Return: void
*/

void more_numbers(void)
{
for (int n = 0; n <= 9; n++)
{
	for (int b = 1; b <= 14; b++)
	{
		_putchar(b + 48);
	}
	_putchar('\n');
}
_putchar('\n');
}
