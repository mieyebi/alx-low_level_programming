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
	int a = strlen(dest);

	int b = strlen(src);

	int c;

	int d;

	for (c = 0; c < a; c++)
	{
		_putchar(dest[c]);
	}

	for (d = 0; d <= b; d++)
	{
		_putchar(src[d]);
	}
	return (dest);
}
