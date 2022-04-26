#include "lists.h"
#include <stdio.h>

/**
* free_listint - frees a listin_t list
*
* @head: dynamically allocated address of list
*
*/

void free_listint2(listint_t **head)
{
	listint_t *a;

	while (*head != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
		*head = NULL;
	}
}
