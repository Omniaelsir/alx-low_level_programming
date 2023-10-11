#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print alphabet in reverse
 *
 * Return: returns (0) on success
*/

int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
