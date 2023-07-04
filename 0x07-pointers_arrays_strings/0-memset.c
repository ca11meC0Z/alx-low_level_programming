#include "main.h"
/**
 * _memset - Sets memory with a constant byte.
 * @s: a pointer to the memory area to be filled.
 * @b: the costant byte to fill the memory.
 * @n: the numbers of bytes to filled.
 * Return: s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
