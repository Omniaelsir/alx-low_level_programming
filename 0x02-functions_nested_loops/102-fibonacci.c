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
	long long int sum = 2;
	long long int x = 1;
	long long int c;

	printf("1");
	for (count = 1; count <= 50; count++)
	{
		printf(", ");
		printf("%lli", sum);
		c = sum;
		sum = sum + x;
		x = c;
	}
	return (0);
}
