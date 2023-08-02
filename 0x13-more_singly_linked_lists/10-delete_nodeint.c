#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes a node with a certain index from the list.
 * @list_head: pointer to the pointer to the head node in the list.
 * @index: index of the node to be deleted.
 * Return: 1 in case of success, or -1 in failure.
 **/
int delete_nodeint_at_index(listint_t **list_head, unsigned int index)
{
	listint_t *current_node = *list_head;
	listint_t *temp_node = NULL;
	unsigned int position = 0;
	
	if (*list_head == NULL)
		return (-1);

	if (index == 0)
	{
		*list_head = (*list_head)->next;
		free(current_node);
		return (1);
	}

	while (position < index - 1)
	{
		if (!current_node || !(current_node->next))
			return (-1);
		current_node = current_node->next;
		position++;
	}

	temp_node = current_node->next;
	current_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
