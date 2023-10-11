#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints all single digit numbers of base 10
 *
 * Return: returns (0) on success
*/

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	putchar('\n');
	return (0);
}
