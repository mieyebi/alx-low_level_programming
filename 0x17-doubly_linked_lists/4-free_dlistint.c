#include "lists.h"

/**
* free_dlistint - frees a dlisitint
* @head: head node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freelist;

	if (head != NULL)
		freelist = head;
	while (freelist)
		freelist = head->next;
	free(freelist);
}
