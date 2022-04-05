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
	str = malloc(sizeof(str));

	str[0] = 's';

	return (str);
}
