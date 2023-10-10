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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (last_digit > 5)
		printf("Last digit of %i is %i and is greater than 5", n, last_digit);
	else if (last_digit == 0)
		printf("last digit of %i is %i and is 0", n, last_digit);
	else if (last_digit < 6 && last_digit !=0);
		printf("Last digit of %i is %i and is greater than 5", n, last_digit);
	return (0);
}
