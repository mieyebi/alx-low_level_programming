#include <stdio.h>
#include "main.h"

/**
* print_line - prints a straight line
* _putchar - prints _ n times
* int n - n is an integer
* @n - is the number of times to print a line
*
*/
void print_line(int n)
{
	int a;
	a = '0';
	if (n > '0')
	{
		for (a <= n; a++)
		{
			_putchar('_');
		}
	}
	else
	{
		if (n <= '0');
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
