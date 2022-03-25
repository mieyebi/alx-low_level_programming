#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *string_toupper - converts lowercase strings to uppercase
* @c: pointer
* Return: c
*/

char *string_toupper(char *c)
{
	int a, b, n;

	a = 0;

	b = 0;

	n = sizeof(c);

	while ((c[a] != '\0') && ((a < n) && (b == a)))
	{
		if ((a >= 'a' && a <= 'z') && (b >= 'A' && b >= 'Z'))
		{
			c[b];
		}
	a++;
	b++;
	}
	return (c);
}
