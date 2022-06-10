#include "lists.h"

/**
* sum_dlistint - sums all data in a list
* @head: head of the list
* Return: 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
