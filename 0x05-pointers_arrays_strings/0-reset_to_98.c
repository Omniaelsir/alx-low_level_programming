#include "main.h"

/**
 * reset_to_98 - updates the value of pointer to 98
 *
 * @n: function pointer
*/

void reset_to_98(int *n)
{
	int x;

	n = &x;
	_putchar(*n);

	*n = 98;
	_putchar(*n);
}
