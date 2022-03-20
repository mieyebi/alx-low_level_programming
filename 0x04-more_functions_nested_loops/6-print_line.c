#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: is the number of times to print a line
 */
void print_line(int n)
{
	if (n > 0)
	{
		int a = 0;
		while (a < n; a++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
