#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* print_list - prints all the elements of a list_t list
*
* @h: string to be printed
*
* Return: n
*
*/

size_t print_list(const list_t *h)
{
	size_t a = 0;

	if (h == 0)
	{
		printf("[0] (nil)/n");
		return (0);
	}
	else
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("%s", h->str);
		h = h->next;
		a++;
	}
	return (a);
}
