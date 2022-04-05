#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* *str_concat - function call to concatenate strings
*
* @s1: string destination
*
* @s2: string 2
*
* Return: NULL or pointer
*
*/

char *str_concat(char *s1, char *s2)
{
	int a, b, c;

	char *z;

	a = b = c = 0;

	while (s1[a] != 0)
	{
		a++;
	}
	while (s2[b] != 0)
	{
		b++;
	}

	z = malloc(((a + 1) + (b + 1)) * sizeof(char));

	if (z == 0 || (s1 == 0 || s2 == 0))
	return (NULL);

	for (a = 0; s1[a] != '\0'; )
		{
			z[c] = s1[a];
			c++;
			a++;
		}
	for (b = 0; s2[b] != '\0'; )
		{
			z[c + 1] = s2[b];
			c++;
			b++;
		}
	return (z);
}
