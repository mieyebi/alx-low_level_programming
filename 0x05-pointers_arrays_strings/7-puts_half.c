#include "main.h"
#include <string.h>

/**
* puts_half - prints the last half of a string
*
* @str: a full string
*
* n = length of the string - 1
*/

void puts_half(char *str)
{
	int a, b, n;

	a = strlen(str);

	b = (a / 2);

	n = ((a -1) / 2);


	if (a % 2 = 0)
	{
		_putchar(str[b]);
		b++;
	}
	else
	{
		_putchar(str[n]);
		n++;
	}
}
