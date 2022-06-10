#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of list
 * @index: index
 * Return: 1 on success ,else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	dlistint_t *b;
	unsigned int z;

	a = *head;

	if (a)
		while (a->prev != NULL)
			a = a->prev;

	z = 0;

	while (a)
	{
		if (z == index)
		{
			if (z == 0)
			{
				*head = a->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				b->next = a->next;

				if (a->next != NULL)
					a->next->prev = b;
			}

			free(a);
			return (1);
		}
		b = a;
		a = a->next;
		z++;
	}

	return (-1);
}
