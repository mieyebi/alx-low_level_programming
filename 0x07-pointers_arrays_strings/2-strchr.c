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

	for (a = 0; *(s + a) == '\0'; a++)
	{
		if (*(s + a) == c)
		{
			return ((s + a));
		}
	}
	return (0);
}
