#include <stdio.h>
#include "main.h"

/**
* print_numbers - prints numbers
*
*/

void print_numbers(void)
{
	int c;
	c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
