#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - function call to return pointer to newly allocated memory space
*
* @str: pointer to a string
*
* Return: NULL or pointer
*
*/

char *_strdup(char *str)

{
	int a, c;

	char *b;

	c = sizeof(int);

	b = malloc(c * sizeof(str));


	if (str == NULL || b == 0)
	return (NULL);

	for (a = 0; *(str + a) != 0; a++)
	{
		b[a] = *(str + a);
	}
	return (b);
}
