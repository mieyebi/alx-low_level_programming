#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers severally
* _putchar - prints numbers
*
*/

void more_numbers(void)
{
	int a;
	int b;
	a = '0';
	b = '0';

	while (b <= '9')
	{	while (a <= '14')
		{	
			_putchar(a);
			a++;
		}
		_putchar(\'n');
		b++;
	}
	_putchar(\'n');
}

