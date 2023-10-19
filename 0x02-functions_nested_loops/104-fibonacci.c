#include <stdio.h>

/**
 * main - entry to program
 *
 * Return: return 0 on success
*/

int main (void)
{
	int count;
	unsigned long c;
	unsigned long sum = 2;
	unsigned long x = 1;

	printf("1, 2");
	for (count = 2; count <= 98; count++)
	{
		c = sum;
		sum = sum + x;
		x = c;
		printf(", ");
		printf("%lu", sum);
	}
	printf("\n");
	return(0);
}
