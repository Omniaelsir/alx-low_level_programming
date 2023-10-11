#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lower cases
 *
 * Return: returns (0) on success
*/

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
