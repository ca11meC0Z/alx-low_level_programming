#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - sort the elements of an input
 * @array: the input array
 * @size: size of the array
 * @action: pointer to a function
 * Return: sorted array
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
