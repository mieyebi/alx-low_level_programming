#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* *add_nodeint - add a new node at the beginning
*
* @head: the head of a linked list
*
* @n: new data
*
* Return: address of new element
*
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	else
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (head);
}
