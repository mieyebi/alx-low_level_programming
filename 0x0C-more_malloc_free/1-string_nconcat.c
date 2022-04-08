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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (n > b)
		n = b;
	p = malloc(sizeof(char) * (n + (a + 1)));

	if (p == 0)
		return (NULL);


	for (c = 0; c < a; c++)
	{
		*(p + c) = *(s1 + c);
	}
	for (d = 0; d < n; d++)
	{
		*(p + c) = *(s2 + d);
		c++;
	}
	*(p + c) = '\0';
	return (p);
}
