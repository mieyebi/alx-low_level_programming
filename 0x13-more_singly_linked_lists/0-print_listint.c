#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a list
*
* @h: singly linked list
*
* Return: number of nodes
*
*/

size_t print_listint(const listint_t *h)
{
	size_t a;

	while (h != NULL)
	{
		printf("%d ", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
