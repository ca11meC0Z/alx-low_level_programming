#include "main.h"
/**
 * puts2 - prints character followed by a new line
 * @str: atring of characters
 **/
void puts2(char *str)
{
	int n = 0, x;

	while (str[n] != '\0')
	{
		n++;
	}
	for (x = 0; x < n; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
