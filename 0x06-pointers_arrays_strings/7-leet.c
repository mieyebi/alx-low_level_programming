#include "main.h"
#include <string.h>

/**
* *leet - encodes a strings
* @a: pointer to char
* Return: a;
*/

char *leet(char *a)
{
	int i, b;

	int low[] = {97, 101, 111, 116, 108};

	int upp[] = {65, 69, 79, 84, 76};

	int num[] = {'4', '3', '0', '7', '1'};

	for (b = 0; *(a + b) != '\0'; b++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*(a + b) == low[i] || *(a + b) == upp[i])
			{
				*(a + b) = num[i];
			}
		}
	}
	return (a);
}
