#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: a number
 * @m: another number
 * Return: the number of bits needed
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int crnt;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		crnt = ex >> i;
		if (crnt & 1)
			cnt++;
	}

	return (cnt);
}
