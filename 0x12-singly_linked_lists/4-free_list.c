#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list
*
* @head: address allocated to the list
*
*/

void free_list(list_t *head)
{
	list_t *a;

	while ((a = head) != NULL)
	{
		head = head->next;
		free(a->str);
		free(a);
	}
}
