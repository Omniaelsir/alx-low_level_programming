#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: function parameter
 *
 * Return: no return
*/

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	while (n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
