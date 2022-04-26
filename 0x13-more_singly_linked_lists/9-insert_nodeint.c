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
	listint_t *new_node, *prev_node;

	new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		return (new_node);
	}
	if (new_node == NULL)
		return (NULL);

	prev_node = *head;

	while (*head != NULL && a < idx)
	{
		prev_node = prev_node->next;
		a++;
	}

	prev_node = new_node;
	new_node->n = n;
	new_node->next = prev_node;
	return (new_node);

	if (a < idx && *head == NULL)
		return (NULL);
}
