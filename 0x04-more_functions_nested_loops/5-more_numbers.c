#include "main.h"
/**
 * more_numbers - prints number followed by new line 10 times
 **/
void more_numbers(void)
{
	int x;
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
	_putchar('\n');
	}
}
