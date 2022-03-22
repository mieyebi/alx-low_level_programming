#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers severally
*/

void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if ((a / 10) == 1)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}

