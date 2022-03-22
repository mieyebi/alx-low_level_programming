#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts2 - prints a string
* @str: a string of characters
*/
void puts2(char *str)
{
	int a;

	for (a = 0; a % 2 != 0; a++)
        {
		if (str[a] != '\0')
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
