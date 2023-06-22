#include "main.h"
/**
 * jack_bauer - is a federal agent
 * Return: always 0
 **/
void jack_bauer(void)
{
	int x;
	int y;
	int m;
	int n;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (m = 0; m <= 6; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					if (x == 2 && y == 4)
					{
						break;
						_putchar(x + 48);
						_putchar(y + 48);
						_putchar(58);
						_putchar(m + 48);
						_putchar(n + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
