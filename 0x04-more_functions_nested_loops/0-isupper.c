#include "main.h"
/**
 * _isupper - checkes for uppercase characters
 * @c: is the character to be checked
 * Return: either 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
