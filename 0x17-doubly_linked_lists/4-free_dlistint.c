#include "lists.h"

/**
* free_dlistint - frees a dlisitint
* @head: head node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freelist;

	while (head)
	{
		freelist = head->next;
		free(freelist);
		head = freelist;
	}
}
