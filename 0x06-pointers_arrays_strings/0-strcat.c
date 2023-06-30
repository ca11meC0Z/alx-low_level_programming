#include "main.h"
/**
 * _strcat - concatonates two strings
 * @dest: destination string
 * @src: source string
 * Return: success
 **/
char *_strcat(char *dest, char *src)
{
	int y = 0, x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
