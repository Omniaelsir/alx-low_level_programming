#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: function parameter
 *
 * @src: function parameter
 *
 * @n: function parameter/number of bytes
 *
 * Return: returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);

}
