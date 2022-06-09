#include "lists.h"

/**
* print_dlistint - prints elements of a doubly linked list
* @h: header value of the list
* Return: number of nodes
*
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
