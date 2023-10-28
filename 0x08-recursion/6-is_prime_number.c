#include "main.h"

/**
 *is_prime_number - is n a prime or not prime number
 *
 *@n: function paraeter
 *
 *Return: 1 if prime, 0 if not prime
*/

/**
 * pass: checks if number is multiple of n
 *
 *@x: function parameter
 *
 *Return: returs 0, 1, pass
*/

int pass(int n, int x);

int is_prime_number(int n)
{
	return (pass(n, 2));
}

int pass(int n, int x)
{
	if (n % x == 0 || n <= 1)
		return (0);

	else if (x >= n && n > 1)
		return (1);

	else
		return (pass(n, x + 1));

}
