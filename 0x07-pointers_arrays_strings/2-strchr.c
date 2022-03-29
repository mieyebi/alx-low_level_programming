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
	int a;

	int b;

	b = 0;

	for (a = 0; *(s + a) != '\0'; a++)
	{
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
	return (0);
}
