#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function prints numbers to 98
 *
 * @n: function parameter
 *
 * Return: returns 0 on success
*/

void print_to_98(int n)
{
	if( n <= 98)
	{
		for (int x = n; x <= 98; x++)
			printf("%d", x);

	}
	else
	{
		for (int y = n; y >= 98; y--)
			printf("%d", y);
	}
	return(0);
}
