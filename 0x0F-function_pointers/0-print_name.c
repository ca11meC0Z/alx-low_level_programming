#include <stdlib.h>
#include "main.h"
/**
 * print_name - prints the name of a function
 * @name: name of a character
 * @f: ponter to a function
 * Return: function name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
