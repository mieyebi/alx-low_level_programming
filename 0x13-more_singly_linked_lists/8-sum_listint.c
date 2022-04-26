#include "lists.h"
#include <stdio.h>

/**
* sum_listint - sums all data of the linked list
*
* @head: head element of linked list
*
* Return: sum
*
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
