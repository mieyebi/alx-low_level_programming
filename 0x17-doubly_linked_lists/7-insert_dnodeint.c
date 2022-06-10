#include "lists.h"

/**
* *insert_dnodeint_at_index - inserts a node a given position
* @h: head of the list
* @idx: index
* @n: new node
* Return: new list or null
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *num;
	unsigned int a;

	new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		num = *h;
		a = 1;
		if (num)
			while (num->prev != NULL)
				num = num->prev;
		while (num != NULL)
		{
			if (a == idx)
			{
				if (num->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = num->next;
						new_node->prev = num;
						(num->next)->prev = new_node;
						num->next = new_node;
					}
				}
				break;
			}
			num = num->next;
			a++;
		}
	}

	return (new_node);
}
