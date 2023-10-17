#include "main.h"

/**
 * rev_string - function reverse string
 *
 * @s: function parameter
 *
 * Return: nothing to return
*/

void rev_string(char *s)
{
	int length;
	int x;
	char swap;

	for (length = 0; s != '\0'; ++length)
		;

	for (x = 0; x < length / 2; x++)
	{
		swap = s[x];
		s[x] = s[length - 1 - x];
		s[length - 1 - x] = swap;
	}
}
