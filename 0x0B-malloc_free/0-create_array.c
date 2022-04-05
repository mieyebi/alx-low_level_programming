#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *create_array - function call to creste array of chars
*
* @size: size of array type
*
* @c: character
*
* Return: NULL if size is 0 or fails
*
*/

char *create_array(unsigned int size, char c)

{
	unsigned int y;

	char *x;

	x = malloc(size * sizeof(char));

	if (x == 0)
	return (NULL);

	for (y = 0; y < size; y++)
	{
		x[y] = c;

	}
	return (x);
}
