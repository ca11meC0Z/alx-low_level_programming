#include "main.h"
/**
 * print_triangle - prints triangles with #
 * @size: is the size of the triangle in lines
 **/
void print_triangle(int size)
{
	int y, a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < size; y++)
	{
		for (a = (size - y); a > 1; a--)
		{
			_putchar(' ');
		}
		for (b = 0; b <= y; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
