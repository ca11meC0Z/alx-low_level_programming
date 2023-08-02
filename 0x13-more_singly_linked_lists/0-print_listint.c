#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to the head node of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t num_nodes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num_nodes++;
	}
	return num_nodes;
}
