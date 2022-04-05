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

	a = c = 0;

	while (*(str + c) != 0)
	{
		c++;
	}
	b = malloc((c + 1) * sizeof(char));


	if (str == NULL || b == NULL)
	{
		return (NULL);
	}

	for (a = 0; *(str + a) != 0; a++)
	{
		b[a] = str[a];
	}
	return (b);
}
