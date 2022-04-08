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

	cal = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (cal == 0)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb; a++)
	{
		cal[a] = 0;
	}
	return (cal);
}
