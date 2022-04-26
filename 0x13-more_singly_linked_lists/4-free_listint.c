#include "lists.h"
#include <stdio.h>

/**
* free_listint - frees a listin_t list
*
* @head: dynamically allocated address of list
*
*/

void free_listint(listint_t *head)
{
	listint_t *a;

	if (head == NULL)
		free(head);

	while (head != NULL)
	{
		a = head->next;
		free(a);
		head = a;
	}
}
