#include "main.h"

/**
 * _puts_recursion - prints string
 *
 * @s: funtion string parameter
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
