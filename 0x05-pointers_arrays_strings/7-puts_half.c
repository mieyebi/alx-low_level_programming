#include "main.h"
#include <string.h>

/**
* puts_half - prints the last half of a string
*
* @str: a full string
*
* @n: length of the string - 1
*/

void puts_half(char *str)
{
	int a, b, n;

	a = strlen(str);

	b = (a / 2);

	n = ((a -1) / 2);


	if (a % 2 == 0)
	{
		while (b < a)
		{
			_putchar(str[b]);
			b++;
		}
		_putchar('\n');
	}
	else
	{
		while (n < a)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
