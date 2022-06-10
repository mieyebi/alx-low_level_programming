#include "lists.h"

/**
* *add_dnodeint - adds new node
* @head: first node of the list
* @n: new node to be added
* Return: address off the new element or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;
	if (*head)
	{
		(*head)->prev = n_node;
	}
	n_node->prev = NULL;
	*head = n_node;
	return (n_node);
}
