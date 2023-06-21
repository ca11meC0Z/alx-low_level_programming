#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @x: is a number
 * Return: last digit
 **/
int print_last_digit(int x)
{
	int n = (x % 10);

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	_putchar('\n');
}
