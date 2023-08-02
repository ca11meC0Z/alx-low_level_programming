#include "lists.h"

/**
 * get_nodeint_at_index - returns a node with an index in a list.
 * @head: pointer to the head node in the list.
 * @index: index of the desired node.
 *
 * Return: either a node of a list, or NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
