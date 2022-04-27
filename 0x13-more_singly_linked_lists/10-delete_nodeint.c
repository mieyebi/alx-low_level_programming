#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index of a linked list
*
* @head: head of linked list
*
* @index: index of the node to be deleted
*
* Return: 1 or -1
*
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;

	listint_t *prev_node, *next_node, *del_node;

	next_node = NULL;
	prev_node = NULL;
	del_node = *head;

	if (*head != NULL && index == 0)
	{
		(*head)->next = next_node;
		free(*head);
		next_node = *head;
	}
	while (*head != 0 && a < index)
	{
		del_node = del_node->next;
		a++;
	}

	prev_node->next = del_node;
	del_node->next = next_node;
	free(del_node);
	prev_node->next = next_node;
	return (1);

	if (*head == NULL)
		return (-1);
	if (*head == NULL && index > 0)
		return (-1);
}
