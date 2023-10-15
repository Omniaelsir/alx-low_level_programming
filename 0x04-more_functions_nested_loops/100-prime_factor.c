#include <stdio.h>

/**
 * square_is: function that finds the square root of a number
 *
 * @x: the number
 *
 * Return: function returns the square root of number x
*/

double square(double x)
{
	float square_is;
	float tmpo;

	square_is = x/2;
	tmpo = 0;

	while (square_is != tmpo)
	{
		tmpo = square_is;
		square_is = (x / tmpo + tmpo) / 2;
	}
	return (square_is);
}

void prime_factor(long int number)
{
	int prime_number;
	int largest;

	while (number % 2 == 0)
	{
		number = number / 2;
	}
	for (prime_number = 3; prime_number <= square_is(number); prime_number +=2)
	{
		while(number % primenumber == 0)
		{
			number = number / prime_number;
			largest = prime_number;
		}
	}
	if ( number > 2)
		largest = number;
	printf("%d\n", largest);
}
