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

	_putchar(*s);

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	if (*s != '\0')
	{
		_puts_recursion(++s);
	}
}

