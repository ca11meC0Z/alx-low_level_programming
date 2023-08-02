#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: pointer to the head node of the linked list.
 * Return: The number of elements.
 **/


size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return num_nodes;
}
