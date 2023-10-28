#include "main.h"

/**
 * _isalpha - function that checks if c is lowercase or uppercase
 *
 * @c: fuction parameter
 *
 * Return: returns (1) if lowercase or uppercase
 *		returns (0) otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
