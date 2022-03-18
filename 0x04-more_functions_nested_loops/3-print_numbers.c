#include <stdio.h>
#include "main.h"

/**
* print_numbers - prints numbers
* _putchar - prints out characters
* @c - c is an integer
* return void on success
*/

void print_numbers(void)
{	int c;
	c = 0;

	for (c <= 9)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
