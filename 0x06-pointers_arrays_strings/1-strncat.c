#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string function parameter
 *
 * @src: string function parameter
 *
 * @n: int function parameter
 *
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	int X;
	int Y;

	X = 0;

	while (dest[X])
	{
		X++;
	}
	for (Y = 0; Y < n && src[Y] != '\0'; Y++)
	{
		dest[X + Y] = src[Y];
	}
	dest[X + Y] = '\0';

	return (dest);
}
