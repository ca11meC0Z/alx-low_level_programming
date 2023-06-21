#include "main.h"
/**
 * _isalpha - checks for lower and uppercase
 * @c: is a character
 * Return: either 1 or 0
 **/
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c <= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
