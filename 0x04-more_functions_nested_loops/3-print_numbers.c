#include <stdio.h>
#include "main.h"

/**
* print_numbers - prints numbers
* _putchar - prints out characters
* @a - a is an integer 
*/

void print_numbers(void)
{	int a;
	a = '0';

	for (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
