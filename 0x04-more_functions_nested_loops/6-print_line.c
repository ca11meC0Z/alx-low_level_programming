#include "main.h"
/**
 * print_line - prints staright line in terminal
 * @n: is the number of _ printed
 **/
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
