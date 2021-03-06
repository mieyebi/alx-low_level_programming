#include "lists.h"

/**
* *get_dnodeint_at_index - returns the nth node of a dlistint
* @head: head node of the list
* @index: index
* Return: nth node of the list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (!head)
		return (NULL);

	while (head->next != NULL && a < index)
	{
		head = head->next;
		a++;
	}
	return (head);
}
