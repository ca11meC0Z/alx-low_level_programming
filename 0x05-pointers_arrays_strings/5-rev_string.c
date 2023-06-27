#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: the string we are working on
 **/
void rev_string(char *s)
{
	int index = 0;
	int length = 0;
	char temp;

	while (s[index++])
	{
		length++;
	}
	for (index = (length - 1); index >= (length/ 2); index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
