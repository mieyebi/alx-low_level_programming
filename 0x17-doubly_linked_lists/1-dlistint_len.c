#include "lists.h"

/**
* dlistint_len - len of the number of elements in a list
* @h: head of the list
* Return: the number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
