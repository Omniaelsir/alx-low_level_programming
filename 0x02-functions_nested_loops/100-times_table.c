#include "main.h"

/**
 * print_times_table - prints the matrix of multiples on nxn
 *
 * @n: function parameter
 *
 * return: void
*/

void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int raw;
		int column;

		for (raw = 0; raw <= n; raw++)
		{	_putchar('0');
			for (column = 1; column <= n; column++)
			{int mult = raw * column;

					_putchar(',');
					_putchar(' ');
				if (mult > 99)
				{	_putchar((mult / 100) + 48);
					_putchar((mult / 10) % 10 + 48);
					_putchar((mult % 10) + 48); }
				else if (mult > 9 && mult <= 99)
				{	_putchar(' ');
					_putchar((mult / 10) + 48);
					_putchar((mult % 10) + 48); }
				else
				{	_putchar(' ');
					_putchar(' ');
					_putchar(mult + 48); }}
			_putchar('\n'); }}
	if (n == 0)
	{	_putchar('0');
		_putchar('\n'); }}
