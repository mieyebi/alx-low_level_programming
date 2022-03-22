#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* print_rev - prints a string in reversal
* @s: the string to be reversed
*/
void print_rev(char *s)
{
	int a;

	int b;

	b = strlen(s);

	for (a = (b - 1); a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

