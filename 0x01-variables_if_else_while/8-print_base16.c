#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char hex;
	int dis;

	for (dis = '0'; dis <= '9'; dis++)
	{
		putchar(dis);
	}
	for (hex = 'A'; hex <= 'F'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
