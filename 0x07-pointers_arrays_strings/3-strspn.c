#include "main.h"
/**
 * _strspn - gets the legth of a prefix substring
 * @s: a pointer to the string
 * @accept: pointer to the string in the prefix substring
 * Return: number of bytes in the initial segment
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *accept_ptr = accept;

	while (*s != '\0')
	{
		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				i++;
			}
			accept_ptr++;
		}
		if (*accept_ptr == '\0')
		{
			break;
		}
		s++;
	}
	
	return (i);
}
