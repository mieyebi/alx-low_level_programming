#include "lists.h"

/**
* free_dlistint - frees a dlisitint
* @head: head node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freelist;

	if (head)
		while (head->prev != NULL)
			head = head->prev;
	freelist = head;

	while (freelist != NULL)
	{
		head= head->next;
		free(freelist);
	}
}
