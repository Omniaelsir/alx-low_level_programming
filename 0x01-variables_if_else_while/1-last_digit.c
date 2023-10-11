#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: prints last digit of a number
 *
 * Return: returns (0) on success
*/
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_d = n % 10;

	if (last_d > 5)
		printf("Last digit of %i is %i and is greater than 5\n:wq", n, last_d);

	else if (last_d == 0)
		printf("last digit of %i is %i and is 0\n", n, last_d);

	else if (last_d < 6 && last_d != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_d);

	return (0);
}
