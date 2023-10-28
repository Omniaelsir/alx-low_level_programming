#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 *
 * @s: function parameter
 *
 * @c: function parameter
 *
 * Return: returns a pointer to s
*/

char *_strchr(char *s, char c)
{
	int itt;

	for (itt = 0; s[itt] >= '\0'; itt++)
	{
		if (s[itt] == c)
		{
			return (s + itt);
		}
	}
	return ('\0');
}
