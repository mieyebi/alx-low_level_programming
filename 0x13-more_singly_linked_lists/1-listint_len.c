#include <stdio.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list
*
* @h: head of the list
*
* Return: n
*
*/
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
