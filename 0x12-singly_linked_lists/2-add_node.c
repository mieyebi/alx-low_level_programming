#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node - adds a new node at the end of a list
*
* @head: the first node
*
* @str: string of elements
*
* Return: NULL or new element address
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (n_node == 0)
		return (NULL);

	else
	{
		n_node->str = strdup(str);
		n_node->len = strlen(str);
		n_node->next = *head;
		*head = n_node;
	}
	return (n_node);
}
