#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be represented
 **/
void print_binary(unsigned long int n)
{
	int i, cnt = 0;
	unsigned long int crnt;

	for (i = 63; i >= 0; i--)
	{
		crnt = n >> i;

		if (crnt & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
