#include <stdio.h>
#include "main.h"

/**
* print_square - prints a square using #
* @size: is the size of the square
*/

void print_square(int size)
{
	int a;

	for (a = 0; a < size)
	{
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		a++;
	}
}

