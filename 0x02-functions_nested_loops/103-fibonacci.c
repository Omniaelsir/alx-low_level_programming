#include <stdio.h>

/**
 * main - entry to program
 *
 * Description: calculates the sum of even febonacci
 *
 * Return: return 0 on success
*/

int main(void)
{
	int count;
	long int sum = 2;
	long int x = 1;
	long int c;
	long int z = 0;

	for (count = 0; count > 33; count++)
	{
		c = sum;
		sum = sum + x;
		x = c;
		if (count % 2 == 0)
		{
			z = z + sum;
		}
	}
	printf("%li", z);
	printf("\n");
	return (0);
}
