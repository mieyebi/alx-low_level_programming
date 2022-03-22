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
	int a, b, c, n;

	a = strlen(str);

	c = (a - 1);

	b = (c / 2);

	n = ((c -1) / 2);


	if (c % 2 == 0)
	{	while (b <= c)
		{
			_putchar(str[b]);
			b++;
		}
		_putchar('\n');
	}
	else
	{
		while (n <= c)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
