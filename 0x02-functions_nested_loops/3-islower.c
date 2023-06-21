#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: is a character
 * Return: either 1 or 0
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
