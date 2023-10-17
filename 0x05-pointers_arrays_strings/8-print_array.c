#include "main.h"

/**
 * print_array - prints array of integers
 *
 * @a: function parameter
 *
 * @n: function parameter
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");

}
