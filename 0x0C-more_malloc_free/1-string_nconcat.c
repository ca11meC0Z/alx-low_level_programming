#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concat s1 followed by first n bytes of s2
 * @s1: first string of char
 * @s2: second string of char
 * @n: number of bytes to be concatenated after s1
 * Return: s1 followed by n bytes of s2
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = 0, y = 0, lng1 = 0, lng2 = 0;

	while (s1 != NULL && s1[lng1] != '\0')
		lng1++;
	while (s2 != NULL && s2[lng2] != '\0')
		lng2++;

	if (n < lng2)
		str = malloc(sizeof(char) * (lng1 + n + 1));
	else
		str = malloc(sizeof(char) * (lng1 + lng2 + 1));

	if (!str)
		return (NULL);

	while (x < lng1)
	{
		str[x] = s1[x];
		x++;
	}

	while (n < lng2 && x < (lng1 + n))
		str[x++] = s2[y++];

	while (n >= lng2 && x < (lng1 + lng2))
		str[x++] = s2[y++];

	str[x] = '\0';

	return (str);
}
