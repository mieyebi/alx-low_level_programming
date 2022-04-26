#include "lists.h"
#include <stdio.h>

/**
* *insert_nodeint_at_index - insert node at a given position
*
* @head: head element of the list
*
* @idx: index of the list to insert a new node
*
* @n: integer n
*
* Return: New node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *new_node = NULL;

	if (*head == NULL)
		return (NULL);

	if (*head != NULL && a < idx)
	{
		*head = (*head)->next;
		a++;
	}
	*head = new_node;
	new_node->n = n;
	new_node->next = *head;
	return (new_node);

	if (a < idx && *head == NULL)
		return (NULL);
}
