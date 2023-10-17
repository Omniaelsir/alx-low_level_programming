#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random password
 *
 *Return: returns (0) on success
*/

int main(void)
{
	int summ;
	char x;

	srand(time(NULL));
	while (summ <= 2645)
	{
		x = rand() % 128;
		summ += x;
		putchar(x);
	}
	putchar(2772 - summ);
	return (0);
}
