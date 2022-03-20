#include <stdio.h>
#include "main.h"

/**
* print_line - prints a straight line
* _putchar - prints _ n times
* int n - n is an integer
* n - is the number of times to print a line
*
*/
void print_line(int n)
{
	int a;
	a = '_';

	for (n > '0'; n++)
	{
		_putchar(a);
	}
	for (n = '0'; n <= '0'; n--)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
