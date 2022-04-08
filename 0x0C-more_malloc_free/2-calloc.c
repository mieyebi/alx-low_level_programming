#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
* *_calloc - allocates memory for an array
*
* @nmemb: an unsigned integer
*
* @size: an unsigned integer
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *cal;

	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(sizeof(unsigned int) * size);

	if (cal == 0)
	{
		return (NULL);
		free(cal);
	}
	for (a = 0; a < nmemb; a++)
	{
		cal[a] = '0';
	}
	return (cal);
}