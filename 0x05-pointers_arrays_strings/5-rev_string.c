#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* rev_string- prints a string in reversal
*
* @s: the string to be reversed
*/

void rev_string(char *s)
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
