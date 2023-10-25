#include "main.h"

/**
 *_strlen_recursion - returns string's length
 *
 *@s: function parameter
 *
 *Return: length
*/

int _strlen_recursion(char *s)
{
	int count;

	count = 0;

	if (*s > '\0')

		count += _strlen_recursion(s + 1) + 1;

	return (count);
}
