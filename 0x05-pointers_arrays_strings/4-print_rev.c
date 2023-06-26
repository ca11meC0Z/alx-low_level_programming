#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 **/
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n -= 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
