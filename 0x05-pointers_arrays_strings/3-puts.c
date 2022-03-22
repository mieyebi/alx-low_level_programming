#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string
* @str: a string of characters
*/
void _puts(char *str)
{
	while (*str != '\0')
	{	*str++;
		_putchar(*str);
	}
	_putchar('\n');
}
