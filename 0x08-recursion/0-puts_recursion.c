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

	s++;

	_putchar('\n');

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}

