#include "lists.h"

/**
* free_dlistint - frees a dlisitint
* @head: head node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freelist;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((freelist = head) != NULL)
	{
		head = head->next;
		free(freelist);
	}
}
