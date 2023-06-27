#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the element of array
 * @n: number of elements of the array
 * @a: the array
 * Return:success
 **/
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x != (n - 1))
	{
		printf(",");
		printf(" ");
	}
	}
	printf("\n");
}
