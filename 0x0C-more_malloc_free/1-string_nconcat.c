#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* *string_nconcat - concatenates two strings
*
* @s1: pointer to a string
*
* @s2: pointer to string 2
*
* @n: insigned integer
*
* Return: 0 or s1
*
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	unsigned int *p;

	a = b = c = d = 0;

	if (s1 == 0)
		a = 0;
	if (s2 == 0)
		b = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (n > b)
	{
		p = malloc(sizeof(char) * (b + 1) * (a + 1));
		if (p == 0)
		{
			free(p);
			return (NULL);
		}
	}
	else
	{
		p = malloc(sizeof(char) * (b + 1) * n);
		if (p == 0)
		{
			free(p);
			return (NULL);
		}
	}
	while (s1 != 0 && s1[a] != '\0')
	{
		p[c] = s1[c];
		c++;
	}
	while (s2 != 0)
	{
		if (n < b && (d < n && s2[n] != '\0'))
		{
			p[c] = s2[d];
			c++;
			d++;
		}
		else if (n > b && (d < b && s2[b] != '\0'))
		{
			p[c] = s2[d];
			c++;
			d++;
		}
	}
return (0);
}
