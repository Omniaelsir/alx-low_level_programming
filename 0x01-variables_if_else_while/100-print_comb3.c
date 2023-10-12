#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible unique combinations
 *		of two digits
 *
 * Return: returns (0) on success
*/

int main(void)
{
	int x = 48;
	int b;

	while (x <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			if (x != b && x < b)
			{
				putchar(x);
				putchar(b);

				if (x + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
