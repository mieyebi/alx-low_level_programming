#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *_strcat - concatenates two strings
*
* @dest: destination of concatenation
*
* @src: string to concatenate
*
* Return: dest on success
*
*/

char *_strcat(char *dest, char *src)

{
	int i = 0;

	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) <= '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
