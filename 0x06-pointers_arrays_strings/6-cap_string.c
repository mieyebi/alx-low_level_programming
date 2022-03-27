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

	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(c + a) >= 'a' && *(c + a) <= 'z')
	{
		*(c + a) = *(c + a) - 32;
	}
	while (*(c + a) != '\0')
	{
		int b;

		for (b = 0; b < 13; b++)
		{
			if (*(c + a) == sep[b])
			{
				if (*(c + a) >= 'a' && *(c + a) <= 'z')
				{
					*(c + a) = *(c + a) - 32;
				}
			}
		}
		a++;
	}
	return (c);
}
