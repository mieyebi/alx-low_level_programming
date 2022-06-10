#include "lists.h"

/**
* *add_dnodeint_end - add node at the end of a list
* @head: head of the list
* @n: element of the new node
* Return: address of new element or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *end_node = malloc(sizeof(dlistint_t));

	if (!end_node)
		return (NULL);
	end_node-> n = n;
	end_node->next = NULL;

	if (*head)
		(*head)->next= end_node;
	a = *head;

	if (a)
	{
		while (a->next != NULL)
		{
			a = a->next;
		}
		a->next = end_node;
	}
	else
		*head = end_node;
	end_node->prev = a;
	return (end_node);
}
