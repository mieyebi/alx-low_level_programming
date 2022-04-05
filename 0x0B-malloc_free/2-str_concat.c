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
	int a, b;

	char *z;

	a = b = 0;

	while (s1[a] != 0)
	{
		a++;
	}
	while (s2[b] != 0)
	{
		b++;
	}

	z = malloc((a + (b + 1)) * sizeof(char));

	if (z == 0)
	{
		return (NULL);
	}

	while (s1[a] != '\0')
		{
			z[a] = s1[a];
			a++;
		}
	while (s2[b] != '\0')
		{
			z[a + 1] = s2[b];
			a++;
			b++;
		}
	return (z);
}
