#include "main.h"
/**
 * print_square - prints squares using #
 * @size: is the size of the squares in lines
 **/
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
