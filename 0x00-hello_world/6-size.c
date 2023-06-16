#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: awlays 0
 */
int main(void)
{
	char s;
	int d;
	long int l;
	long long int e;
	float f;

	printf("The size of a char is: %lu byte(s).\n", (unsigned long)sizeof(s));
	printf("The size of an int is: %lu byte(s).\n", (unsigned long)sizeof(d));
	printf("The size of a long int is: %lu byte(s).\n", (unsigned long)sizeof(l));
	printf("The size of a long long int is: %lu byte(s).\n", (unsigned long)sizeof(e));
	printf("The size of a float is: %lu byte(s).\n", (unsigned long)sizeof(f));
	return (0);
}
