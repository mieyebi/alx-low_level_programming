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
	int c, d;

	c = strlen(s1);

	d = strlen(s2);

	if (c == d)
		return (0);

	else if (c > d)
		return (1);

	else if (c < d)
		return (0 - 1);
}




/**&& (a < c && a < d; a++	))
	{
		if (*(s1 + a) == *(s2 + a))
		{
			a++;
		}
		return (0);
		else if (*(s1 + a) < (*(s2 + a))
			break;
			return (0 - 1);

		else if (*(s1 + a) > (*(s2 + a))
			break;
			return (1);
	}
	return (0);

	while (
	{

	/**for ( ; a < c && *(s1 + a) != '\0'; a++)
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
*/
