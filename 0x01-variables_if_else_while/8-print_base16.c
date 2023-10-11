#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all base 16 numbers
 *
 * Return: returns 0 on success
:wq*/

int main(void)
{
	int x = 48;

	while (x <= 70)
	{
		if (58 <= x && x <= 64)
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
