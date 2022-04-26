#include "lists.h"
#include <stdio.h>

/**
* *add_nodeint_end - add new node at end of list
*
* @head: head of list
*
* @n: new data
*
* Return: address of new element or NULL
*
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *last_node;

	end_node = malloc(sizeof(listint_t));
	last_node = *head;

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = end_node;
	return (end_node);
}
