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
	int a, b, c, d;
	char *z;

	a = b = c = d = 0;

	if (s1 == NULL)
		a = 0;
	else
	{
		while (s1[a] != 0)
		{
			a++;
		}
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		while (s2[b] != 0)
		{
			b++;
		}
	}
	z = malloc((a + (b + 1)) * sizeof(char));

	if (z == 0)
	return (NULL);

	while ((s1 != NULL) && (s1[c] != '\0'))
	{
		z[c] = s1[c];
		c++;
	}
	while ((s2 != NULL) && (s2[d] != '\0'))
	{
		z[c] = s2[d];
		c++;
		d++;
	}
	return (z);
}
