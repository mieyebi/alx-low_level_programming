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
	dlistint_t *num, *_prev;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int a = 0;

	if (!*h)
		return (NULL);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	num = *h;
	while (num)
	{
		a++;
		num = num->next;
		if (a == idx)
			break;
	}
	new_node->next = num;
	new_node->prev = num->prev;
	(num->prev)->next = new_node;
	num->prev = new_node;
	return (new_node);

	if (!num && a == idx)
	{
		new_node->next = num;
		new_node->prev = _prev;
		_prev->next = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
