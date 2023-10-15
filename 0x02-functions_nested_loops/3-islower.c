#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: function paramemter
 *
 * Return: returns (1) if c is lowercase
 *		returns(0) otherwise
*/

int _islower(int c)
{

	if ('a' <= c <= 'z')
		return (1);
	else
		return (0);
}
