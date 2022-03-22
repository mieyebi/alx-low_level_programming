#include "main.h"
#include <string.h>

/**
* puts_half - prints the last half of a string
*
* @str: a full string
*
*/

void puts_half(char *str)
{
	int a, b, n;

	a = strlen(str);

	b = (a / 2);

	if (a % 2 == 0)
	{
		while (b < a)
		{
			_putchar(str[b]);
			b++;
		}
		_putchar('\n');
	}
	else if (a % 2 != 0)
	{
		n = ((a - 1) / 2);

		while (n < a)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
