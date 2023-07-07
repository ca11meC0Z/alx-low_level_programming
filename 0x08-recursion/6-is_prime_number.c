#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: The number to be checked
 * Return: prime_number
 **/
int is_prime_number(int n)
{
	return (prime_number(n, 1));
}
/**
 * prime_number - checks in n is prime number
 * @n: The number to be checked
 * @m: iteration number
 * Return: either 0 or 1
 **/
int prime_number(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (m > 1 && n % m == 0)
	{
		return (0);
	}
	else if (m > 1 && n % m == 1)
	{
		return (1);
	}
	return (prime_number(n, m + 1));
}
