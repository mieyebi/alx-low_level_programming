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
	int a;

	a = 0;

	while (*(c + a) != '\0')
	{
		if (*(c + a) >= 'a' && *(c + a) <= 'z')
		{
			*(c + a) = *(c + (a - 32));
		}
		else
		{
			break;
		}
		a++;
	}
	return (c);
}
