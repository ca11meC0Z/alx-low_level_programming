#include "main.h"
/**
 * print_sign - prints the sign of a number
 * n: a number
 * Return: ranges from 1 to -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
	_putchar('\n');
}
