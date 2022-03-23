#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_strcat - concatenates two strings
*
* @*dest: destination of concatenation
*
* @*src: string to concatenate
*
* Return: dest on success
* main - reference to main
*/

char *_strcat(char *dest, char *src)

{
	int a = sizeof(dest);

	int b = sizeof(src);

	int c;

	int d;

	for (c = 0; c < a; c++)
	{
		printf("%d", dest[c]);
	}

	for (d = 0; d <= b; d++)
	{
		printf("%d", src[d]);
	}
	return (dest);
}
