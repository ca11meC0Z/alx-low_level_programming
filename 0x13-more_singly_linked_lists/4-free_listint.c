#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a list.
 * @list_head: pointer to the head node of the list.
 **/
void free_listint(listint_t *list_head)
{
	listint_t *current_node;

	while (list_head)
	{
		current_node = list_head->next;
		free(list_head);
		list_head = current_node;
	}
}
