#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if for big, 1 if little endianness
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *e = (char *) &g;

	return (*e);
}
