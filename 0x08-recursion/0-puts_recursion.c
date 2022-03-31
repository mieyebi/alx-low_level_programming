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
	int a = 0;

	if (*(s + a) != '\0')
	{
		a++;
		_putchar(*(s + a));
		_puts_recursion(s + a);
	}

	else if (*s == '\0')
	{
		return;
	}
	_putchar('\n');
}

