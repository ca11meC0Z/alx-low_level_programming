#include "main.h"
/**
 * _strchr - locates a character
 * @s: string of characters
 * @c: the character wanted
 * Return: even c or null
 **/
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}
		return ("NULL");
}
