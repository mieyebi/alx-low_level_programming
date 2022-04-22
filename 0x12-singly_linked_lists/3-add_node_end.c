#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node_end - adds a new node at the end of a list
*
* @head: the first node
*
* @str: string of elements
*
* Return: NULL or head address
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *temp;

	n_node = malloc(sizeof(list_t));

	if (n_node == 0)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = strlen(str);
	n_node->next = NULL;
	temp = *head;

	if (temp == 0)
		*head = n_node;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n_node;
	}

	return (*head);
}
