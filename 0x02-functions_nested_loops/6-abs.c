#include "main.h"
/**
 * _abs - calculate the absolute value of a number
 * @x: is a number
 * Return: always 0
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
	_putchar('\n');
}
