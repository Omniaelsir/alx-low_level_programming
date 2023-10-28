#include "main.h"

/**
 * _strcat - function concatenates two strings
 *
 * @dest: string parameter
 *
 * @src: string appended to dest
 *
 * Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int A = 0;
	int B;

	while (dest[A])
		A++;

	for (B = 0; src[B]; B++)
		dest[A++] = src[B];

	return (dest);
}
