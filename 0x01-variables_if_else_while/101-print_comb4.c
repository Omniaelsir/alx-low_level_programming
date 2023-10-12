#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints all possible different combinations of three digits
 *
 * Return: returns (0) on success
*/
int main(void)
{
	int x = 0;
	int y;
	int z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 9)
			{
				if (x != y && x < y && y != z && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);

					if (x + y + z != 24)
					{
						putchar(',');
						putchar(' ');
					}

				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
