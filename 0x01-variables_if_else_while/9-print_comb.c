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
	int x = 48;

	while (x <= 57)
	{
		putchar(x);

		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}

		x++;
	}
	putchar('\n');
	return (0);
}
