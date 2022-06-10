#include "lists.h"

/**
* *insert_dnodeint_at_index - inserts a node a given position
* @h: head of the list
* @idx: index
* @n: new node
* Return: new list or null
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *num;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int a = 0;

	if (!*h)
		return (NULL);
	num = *h;
	while (*h)
	{
		a++;
		num = num->next;
		if (a == idx)
			break;
	}
	new_node->n = n;
	num->next = new_node;
	num = new_node;
	return (new_node);
}
