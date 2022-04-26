#include "lists.h"
#include <stdio.h>

/**
* pop_listint - deletes the head of a linked list
*
* @head: head of linked list
*
* Return: head->n
*
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int a;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	free(*head);

	a = (*head)->n;
	return (a);
}
