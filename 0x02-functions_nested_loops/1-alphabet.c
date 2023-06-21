#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
}
