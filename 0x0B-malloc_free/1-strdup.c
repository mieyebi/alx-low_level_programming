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
	int a;

	char *b;

	int c;

	c = strlen(str);

	b = malloc(sizeof(char));

	if (str == NULL)
	return (NULL);

	for (a = 0; a <= c; a++)
	{
		*(str + a) = b[a];
	}
	return (b);
}
