#include "main.h"
#include <stdio.h>

/**
* *_strchr - locates a character in a string
*
* @s: string of characters
*
* @c: character to locate
*
  * Return: s or NULL on success
*
*/

char *_strchr(char *s, char c)
{
	int a, b;

	a = b = 0;

	if (*(s + a) != '\0')
	{
		while (*(s + a) != c)
		{
			a++;
		}
		return (00);
	}
	else
	while (*(s + a) != '\0')
	{
		++a;
		if (*(s + a) == c)
		{
			*(s + a) = *(s + b);
		}
		break;
	}
	while (*(s + b) != '\0')
	{
		b++;
	}
	return (s);
}
