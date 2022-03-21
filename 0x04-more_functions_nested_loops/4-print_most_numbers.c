#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - print most numbers from 0-9
*
*/

void print_most_numbers(void)
{
	int c;

	c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')

		_putchar(c);
		c++;
	}
	_putchar('\n');
}
