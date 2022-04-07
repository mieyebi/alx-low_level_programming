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
	char *p;

	a = b = c = d = 0;

	if (s1 == 0)
		s1 = 0;
	if (s2 == 0)
		s2 = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (n > b)
	{
		p = malloc(sizeof(char) * (b + (a + 1)));
		if (p == 0)
		{
			return (NULL);
		}
	}
	else
	{
		p = malloc(sizeof(char) * ((a + 1) + n));
		if (p == 0)
		{
			return (NULL);
		}
	}
	for (c = 0 && c < a; s1 != 0 && *(s1 + a) != '\0'; c++)
	{
		*(p + c) = *(s1 + c);
	}
	while (s2 != 0)
	{
		if (n < b && s2[n] != '\0' && d < n)
		{
			*(p + c) = *(s2 + d);
			c++;
			d++;
		}
		else if (n > b && (d < b && *(s2 + b) != '\0'))
		{
			*(p + c) = *(s2 + d);
			c++;
			d++;
		}
	}
	*(p + c) = '\0';
	return (p);
}
