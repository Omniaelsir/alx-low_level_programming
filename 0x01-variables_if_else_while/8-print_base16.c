#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all base 16 numbers
 *
 * Return: returns 0 on success
*/

int main(void)
{
	int x = 48;
	int b = 97;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	while (b <= 102)
	{
		putchar(x);
		b++;
	}
	putchar('\n');
	return (0);
}
