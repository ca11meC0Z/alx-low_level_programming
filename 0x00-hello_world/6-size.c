#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: awlays 0
 */
int main(void)
{
	int d;
	char s;
	double t;

	printf("The size of an integer is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a character is: %lu.\n", (unsigned long)sizeof(s));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(t));
	return (0);
}
