#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program prints the sum of multiples of 3 and 5
 *
 * Return: returns sum
*/

int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum+ = x;
		}
	}
	return (sum);
}
