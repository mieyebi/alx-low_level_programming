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
	int a, b;

	a = 0;

	while (*(s1 + a) != '\0' && *(s2 + a) != '\0')
		{
			if (*(s1 + a) == *(s2 + a))
			{
				b = 0;
			}
			else if (*(s1 + a) - *(s2 + a) != 0)
			{
				b = 1;
				break;
			}
			a++;
		}
	return (b);
}
