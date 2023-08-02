#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a list.
 * @list_head: pointer to the head node of the list.
 **/
void free_listint(listint_t *list_head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
