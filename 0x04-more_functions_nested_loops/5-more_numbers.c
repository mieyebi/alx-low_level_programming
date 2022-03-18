#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers severally
*/

void more_numbers(void)
{
	int a;
	int b;
	int c = '7';
	int d = '2';

	for(b = '0'; b <= '9'; b++)
	{
		for(a = '0'; a <= (c * d); a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
	_putchar('\n');
}

