#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *string_toupper - converts lowercase strings to uppercase
* @c: pointer
*/

char *string_toupper(char *c)
{
	int a, b, n;

	a = 0;

	b = 0;

	n = sizeof(c);

	if ((a >= 'a' && a <= 'z') && (b >= 'A' && b >= 'Z'))
	{
		while ((c[a] != '\0') && (a < n))
		{
			c[b];
			a++;
			b++;
		}
	}
}
