#include "main.h"

/**
 * factorial - returns factorial of a number
 *
 * @n: function parameter
 *
 * Return: n's factorial
*/

int factorial(int n)
{
	int num = 0;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	num *= factorial(n - 1);
	return (num);

}
