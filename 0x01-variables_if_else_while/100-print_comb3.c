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
	int x = 0;
	int b;

	while (x <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (x != b && x < b)
			{
				putchar(x + 48);
				putchar(b + 48);

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
