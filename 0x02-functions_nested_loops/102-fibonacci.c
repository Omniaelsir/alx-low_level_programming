#include <stdio.h>

/**
 * main - entry tp program
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: returns 0 on success
*/

int main(void)
{
	int count;
	int sum = 2;
	int x = 1;
	int c;

	printf("1");
	for (count = 1; count <= 50; count++)
	{
		printf(", ");
		printf("%d", sum);
		c = sum;
		sum = sum + x;
		x = c;
	}
	return (0);
}
