#include <stdio.h>
#include "main.h"

/**
* print_square - prints a square using #
* @size: is the size of the square
*/

void print_square(int size)
{
	int a;

	a = 1;

	for (a <= size; a++)
	{
		for (a <= size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

