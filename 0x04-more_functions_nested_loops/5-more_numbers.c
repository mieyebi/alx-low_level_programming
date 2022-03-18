#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers severally
*/

void more_numbers(void)
{
	int a = '0';
	int b = '0';
	int c = '7';
	int d = '2';
	int e;

	e = c * d;

	for (b <= '9'; b++)
	{
		for (a <= e; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
	_putchar('\n');
}

