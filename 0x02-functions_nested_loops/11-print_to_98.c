#include "main.h"
#include "stdlib.h"
/**
 * print_to_98 - print number to 98
 * @n: is the number the user puts in
 * Return: Always 0
 */
void print_to_98(int n)
{
	int x;
	int y;

	for (x = n; x < 98; x++)
	{
		if (x != 98)
		{
			printf("%d, ", x);
		}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
	}
	for (y = n; y > 98; y--)
	{
		if (y != 98)
		{
			printf("%d, ", y);
		}
			else if (y == 98)
			{
			printf("%d");
			}
	}
}
