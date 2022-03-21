#include <stdio.h>
#include "main.h"

/**
* print_square - prints a square using #
* @size: is the size of the square
*/

void print_square(int size)
{
	int a;

	for (a = 0; a < size; a++)
	{
		int b = 0;

		while (b <= a)
		{
			_putchar('#');
			b++;
		}
	}
	_putchar('\n');
}

