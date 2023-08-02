#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a list.
 * @head: pointer to the pointer to the head node of the list.
 * Return: either the data inside the element that was deleted, or 0 .
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
