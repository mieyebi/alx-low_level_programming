#include "lists.h"
#include <stdio.h>

/**
* *get_nodeint_at_index - returns the nth node of a linked list
*
* @head: first node of linked list
*
* @index: index of the nth node
*
* Return: NULL or node
*
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;

	unsigned int a = 0;

	if (head == NULL)
		return (NULL);

	nth_node = head;

	while (head != NULL && a <= index)
	{
		nth_node = head->next;
		a++;
	}
	return (nth_node);
}
