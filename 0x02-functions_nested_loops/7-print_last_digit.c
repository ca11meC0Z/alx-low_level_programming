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
		_putchar(n + 48);
		return (n);
	}
	else
	{
		_putchar(-n + 48);
		return (-n);
	}
	_putchar('\n');
}
