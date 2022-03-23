#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int a = (sizeof dest);

	int b = (sizeof src);

	int c;

	for (c = 0; c < a; c++)
	{
		printf("%d", dest[c]);
	}
	for (c = 0; c <= b; c++)
	{
		printf("%d", src[c]);
	}
	return (dest);
}
