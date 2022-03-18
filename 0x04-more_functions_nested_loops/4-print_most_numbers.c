#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - print most numbers from 0-9
*
*/

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++; c != '2'; c != '4')
	{
		_putchar(c);
	}
	_putchar('\n');
}
