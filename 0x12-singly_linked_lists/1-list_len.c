#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* list_len - returns the number of elements in a linked list
*
* @h: string of elements
*
* Return: a
*
*/

size_t list_len(const list_t *h)
{
	size_t a = 1;

	while (h != 0)
	{
		if (h->str == 0)
			return (0);
		else
		h = h->next;
		a++;
	}
	return(a);
}
