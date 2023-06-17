#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
