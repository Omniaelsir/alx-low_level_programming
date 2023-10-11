#include <stdio.h>

/**
 * main - Entry point
 *
 * Desciption:  prints all possible combinations of single-digit numbers
 *
 * Return: returns (0) on success
*/

int main(void)
{
	int x = 0;

	while (x <= 8)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar(9);
	return (0);
}
