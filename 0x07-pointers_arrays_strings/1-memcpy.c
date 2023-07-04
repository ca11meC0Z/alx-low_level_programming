#include "main.h"
/**
 * _memcpy - copies a memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of byter copied
 * Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	return (dest);
}
