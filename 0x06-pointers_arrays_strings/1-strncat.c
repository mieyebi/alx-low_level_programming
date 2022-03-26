#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* *_strncat - concatenates two strings
* @dest: is the destination
* @src: is the source
* @n: is an integer
* Return: return dest on success
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while ( j < n)
	{
		*(dest + i) = *(src + j);
		{
			if (*(src + i) != '\0')
			{
				i++;
				j++;
			}
		}
	}
	return (dest);
}
