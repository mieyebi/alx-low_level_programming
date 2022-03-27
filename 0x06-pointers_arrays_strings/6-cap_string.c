#include "main.h"
#include <string.h>

/**
* *cap_string - capitalizes all words of a string
* @c: string c
* Return: c
*/
char *cap_string(char *c)
{
	int a = 0;

	if (*(c + a) >= 'a' && *(c + a) <= 'z')
	{
		*(c + a) = *(c + a) - 32;
	}
	while (*(c + a) != '\0' && *(c + a) == ' ')
        {
                a++;
		if (*(c + a) >= 'a' && *(c + a) <= 'z')
                {
			*(c + a) = *(c + a) - 32;
		}
	}
	return (c);
}

