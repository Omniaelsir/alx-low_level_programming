#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @n: function parameter
 *
 * Return: no return
*/

void print_rev(char *s)
{
	int n;

	while (s[n] != '\0')
		n++;

	while (n--)
	{
		_putchar(s[n]);	
	}
	_putchar('\n');
}
