#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
* Return: 0 or 1 on success
*/

int _strcmp(char *s1, char *s2)
{
	int a, b, c, d;

	a = b = 0;

	c = sizeof(s1);

	d = sizeof(s2);

	for ( ; a < c && *(s1 + a) != '\0'; a++)
	{
		if (b < d && *(s1 + b) != '\0')
		{
			if (*(s1 + a) = *(s2 + b))
			{
				a++;
				b++;
			}
			return (0);
		}
		else if (*(s1 + a) < *(s2 + b))
		{
			break;
			return (-1);
		}
		else if (*(s1 + a) > *(s2 + b))
		{
			break;
			return (1);
		}
	}
}
