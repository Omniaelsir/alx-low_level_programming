#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lower and upper case
 *
 * Return: returns (0) on success
*/
int main(void)
{
	int x = 97;
	int b = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
