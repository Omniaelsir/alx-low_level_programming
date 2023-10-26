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

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	n *= factorial(n - 1);
	return (n);

}
