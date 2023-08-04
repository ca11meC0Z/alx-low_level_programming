#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: the number that represent the bit
 * @index: bit index
 * Return: bit value at index
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
