#include "main.h"

/**
 * swap_int - swaps the values of two numbers
 *
 * @a: function parameter
 *
 * @b: function parameter
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
