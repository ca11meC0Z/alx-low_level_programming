#include "main.h"
/**
 * _puts - prints a string
 * @str: is the string we want to print
 **/
void _puts(char *str)
{
	while (*str !='\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
