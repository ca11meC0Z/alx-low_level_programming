#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a list.
 * @list_head: pointer to the pointer of the head node of the list.
 * Return: either the data inside the element that was deleted, or 0 if the list is empty.
 **/
int pop_listint(listint_t **list_head)
{
	listint_t *temp;
	int data;

	if (!list_head || !*list_head)
	{
		return (0);
	}
	data = (*list_head)->n;
	temp = (*list_head)->next;
	free(*list_head);
	*list_head = temp;
	return (data);
}
