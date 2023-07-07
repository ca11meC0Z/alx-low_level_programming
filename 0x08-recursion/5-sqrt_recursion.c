#include "main.h"
/**
 * _sqrt_recursion - returns the squar root of a number
 * @n: a given number
 * Return: square root of n
 * _sqrt - calculates natural squar root
 * @x: iteration number
 **/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));
}
