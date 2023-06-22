#include "main.h"
/**
 * times_table - prints multipication table
 *
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar(x * y);
			_putchar(',');
		}
	_putchar('\n');
	}
}
