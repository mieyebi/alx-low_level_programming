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
	int b = 0;

	while (*(s + b) != '\0')
	{
		_putchar (*(s + b));
		b++;
	}
	_putchar('\n');
}

