#include "lists.h"

/**
 * get_nodeint_at_index - returns a node with an index in a list.
 * @list_head: pointer to the head node in the list.
 * @index: index of the desired node.
 *
 * Return: either a node of a list, or NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *list_head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current_node = list_head;
	
	while (current_node && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}
	return (current_node ? current_node : NULL);
}
