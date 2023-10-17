#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: function parameter
 *
 * @src: function parameter
 *
 *Return: returns dest
*/

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do 
	{
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');

	return (dest);
}
