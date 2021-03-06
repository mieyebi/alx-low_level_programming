#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* *malloc_checked - allocates memory and checks process termination
*
* @b: unsigned int
*
* Return: 98 or c
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b);

	if (c == 0)
	{
		free(c);
		exit(98);
	}
	return (c);
}
