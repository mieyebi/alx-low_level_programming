#include "main.h"
#include <stdio.h>

/**
* *_strchr - locates a character in a string
*
* @s: string of characters
*
* @c: character to locate
*
* Return: s on success
*
*/

char *_strchr(char *s, char c)
{
	int a;

	int b = 0;

	char *p;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) == c)
		{
			break;

			*(s + a) = *(p + b);

			while ( *(p + b) != '\0')
			{
				b++;
			}
		}
		else if (*(s + a) != c && *(s + a) == '\0')
		{
			s[a] = 0;
		}
	}
	return (s);
}
