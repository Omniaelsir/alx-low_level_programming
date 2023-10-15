#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercases
 * 			using _putchar function
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
