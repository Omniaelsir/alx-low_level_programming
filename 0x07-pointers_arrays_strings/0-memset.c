#include "main.h"

/**
 * *_memset - function fills memory with a constant byte
 *
 * @s: function parameter / pointer
 *
 * @b: function parameter / constant
 *
 * @n: function parameter / number of maximum bytes
 *
 * Return: returns pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
