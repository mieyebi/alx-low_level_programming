#include "lists.h"
#include <stdio.h>

/**
* free_listint2 - frees a listin_t list
*
* @head: dynamically allocated address of list
*
*/

void free_listint2(listint_t **head)
{
	listint_t *a, *frd;


	while (*head != NULL)
	{
		frd = *head;
		a = frd->next;
		free(frd);
		*head = NULL;
		*head = a;
	}
}
