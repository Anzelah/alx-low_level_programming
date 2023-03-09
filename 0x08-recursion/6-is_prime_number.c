#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number - returns an integer
 * @n: input integer to be checked
 *
 * Return: 1 if input is prime number, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (actual_prime_number(n, n - 1));
}
/**
 * actual_prime_number - recurser to find the prime number
 * @n: input integer to be checked
 * @i: iterator
 *
 * Return: prime number
*/

int actual_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
		return (actual_prime_number(n, n - 1));
}
