#include "main.h"
/**
 * _strcpy - copies one string into another
 * @dest: is the destination string
 * @src: is the source string
 * Return: source string input
 **/
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}
