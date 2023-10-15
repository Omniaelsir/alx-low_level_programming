#include "main.h"

/**
 * main - beginning of the program
 *
 * Description: the program prints _putchar
 *
 * Return: returns (0) on success
*/

int main(void)
{
	char word[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(word[x]);

	_putchar('\n');

	return (0);
}
