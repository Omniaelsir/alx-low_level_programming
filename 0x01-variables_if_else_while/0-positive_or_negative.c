#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: print whether the number is positive or negative
 *
 * Return: returns 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is Zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
