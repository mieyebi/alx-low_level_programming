#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
* *_realloc - reallocates a block of memory
*
* @ptr: pointer to previously alloocated memory
*
* @old_size: size of previously allocated space
*
* @new_size: size of new memory block
*
* Return: 0 or ptr
*
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *p;

	unsigned int a, b;

	p = ptr;

	a = b = 0;


	new_ptr = malloc(new_size);
	if (new_ptr == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		while (a < old_size)
		{
			new_ptr[b] = p[a];
			b++;
			a++;
		}
		free(ptr);
		while (b < new_size)
			b++;
	}
	if (new_size == 0 && ptr != 0)
	{
		free(new_ptr);
		free(ptr);
		return (NULL);
	}

	if (ptr == 0)
	{
		return (new_ptr);
	}
	free(ptr);
	return (new_ptr);
}
