#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: returns (0) on success
*/
int main(void)
{
	int x = 0;
	int z;

	while (x <= 99)
	{
		z = x;
		while (z <= 99)
		{
			if (z != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 19) + 48;

				if (x != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			z++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
