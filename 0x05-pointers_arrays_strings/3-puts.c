#include "main.h"

/**
 * _puts - prints string to stdout
 *
 * @str: function parameter
 *
 * Return: nothing*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
