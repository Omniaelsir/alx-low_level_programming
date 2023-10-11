#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *		except q and e
 *
 * Return: returns (0) on success
*/

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 113 || x == 101)
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
