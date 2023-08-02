#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @list_head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all the data.
 */
int sum_listint(listint_t *list_head)
{
	int total_sum = 0;
	listint_t *current_node = list_head;

	while (current_node)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	}
	return total_sum;
}
