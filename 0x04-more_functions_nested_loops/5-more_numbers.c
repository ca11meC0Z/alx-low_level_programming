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
		for (x = 0; x <= 10; x++)
		{
			if (x == 10)
			{
				_putchar(1011121314 + 48);
			}
			_putchar(x + 48);
		}
	_putchar((y + 48)'\n');
	}
}