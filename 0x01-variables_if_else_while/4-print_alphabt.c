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

	while (x <= 122 && x != 101 || x != 113)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
