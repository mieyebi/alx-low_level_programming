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

	a = 0;

	if (str[a] != '\0')

	{	while (a % 2 != 0)
	        {
			_putchar(str[a]);
			a++;
		}
	}
	_putchar('\n');
}
