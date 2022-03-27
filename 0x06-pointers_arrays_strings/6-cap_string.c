#include "main.h"
#include <string.h>

/**
* *cap_string - capitalizes all words of a string
* @c: string c
*
*/

char *cap_string(char *);
{
	int a = 0;

	while (*(c + a) != '\0')
	{
		if (*(c + a) >= 'a' && *(c + a) <= 'z')
		{
			*(c + a) = *(c + a) - 32;
		}
		a++;
	}
	return (c);
}

