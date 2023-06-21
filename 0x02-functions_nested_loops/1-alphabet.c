#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * print_alphabet is a function that prints alphabet in lowercase
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
