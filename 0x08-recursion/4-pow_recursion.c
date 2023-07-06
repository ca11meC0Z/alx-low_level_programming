#include "main.h"
/**
 * _pow_recursion - returns X raised to the power of Y
 * @x: a given number
 * @y: a given number
 * Return: X to the power of Y
 **/
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
