#include <stdio.h>
#include "main.h"

/**
* print_square - prints a square using #
* @size: is the size of the square
*/

void print_square(int size)
{
	int a;

	a = 0;

	while (size > a)
	{
		int b = 0;

		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}
