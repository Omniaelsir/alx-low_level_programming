#include "main.h"

/**
 * print_most_numbers - print integers except 2 & 4
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			return;

		_putchar(x + 48);
	}
	_putchar('\n');
}
