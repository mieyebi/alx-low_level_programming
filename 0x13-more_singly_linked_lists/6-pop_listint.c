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

	temp = *head;

	if (temp != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	a = (*head)->n;
	return (a);
}
