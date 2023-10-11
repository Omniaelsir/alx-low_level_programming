#include <stdio.h>

/***/
int main(void)
{
	int x = 97;
	int b = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return(0);
}
