#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning oo a list.
 * @list_head: pointers to the pointer of the first node in the list.
 * @data: data to be inserted in the new node.
 * Return: pointer to the new  address of the new element, or NULL if it failed.
 **/
listint_t *add_nodeint(listint_t **list_head, const int data)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = data;
	new_node->next = *list_head;
	*list_head = new_node;

	return (new_node);
}
