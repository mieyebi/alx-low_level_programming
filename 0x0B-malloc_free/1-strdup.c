#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	c = sizeof(str);

	b = malloc(c * sizeof(char));

	if (str == NULL || b == 0)
	return (NULL);

	for (a = 0; str[a] != 0; a++)
	{
		str[a] = b[a];
	}
	return (b);
}
