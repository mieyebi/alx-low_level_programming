#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - prints a string
*
*@s: string
*
*/

void _puts_recursion(char *s)
{
	s++;
	_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s);
	}

	else if (*s == '\0')
	{
		return;
	}
}

