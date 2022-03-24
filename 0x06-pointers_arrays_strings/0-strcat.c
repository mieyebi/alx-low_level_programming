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
	int a = sizeof(dest);

	int b = sizeof(src);

	int c = 0;

	int d = 0;

	while ((c < a) && (dest[c] != '\0'))
	{
		c++;
	}

	while ((d <= b) && (src[d] != '\0'))
	{
		(dest[c] = src[d]);
		c++;
		d++;
	}
	return (dest);
}
