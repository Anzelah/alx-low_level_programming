#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 *
 * Return: always (0)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d if the number is greater than 0: is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d if the number is 0: is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d if the number is less than zero: is negative\n", n);
	}
	return (0);

}
