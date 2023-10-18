#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prints numbers to 98
 *
 * @n: function parameter
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		int x;

		for (x = n; x <= 98; x++)
		{
			printf("%d", x);

			if (x != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
	{
		int y;

		for (y = n; y >= 98; y--)
		{
			printf("%d", y);

			if (y != 98)
				printf(", ");
		}
		printf("\n");
	}
}
