#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int l;
	int az;

	for (l = 1; l < 11; l++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			putchar(az);
		}
	}
	putchar('\n');
}
