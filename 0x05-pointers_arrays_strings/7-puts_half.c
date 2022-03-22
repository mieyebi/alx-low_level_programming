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


	if (a % 2 == 0)
	{	for (b <= a; b != '\0'; b++)
		{
			_putchar(str[b]);
		}
		_putchar('\n');
	}
	else
	{
		for (n <= a; n != '\0'; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
