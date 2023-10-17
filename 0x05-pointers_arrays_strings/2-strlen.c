#include "main.h"

/**
 * _strlen - function returs the length of string
 *
 * @s: function parameter
 *
 * Return: returns the length of string
*/

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
		++x;

	return (x);
}
