#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @list_head: Pointer to the first node in the linked list.
 *
 * Return: The resulting sum of all the data.
 */
int sum_listint(listint_t *list_head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
