#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal line on the terminal using /
*@n: the number of times to print /
*
*/
void print_diagonal(int n)
{
	int z = 0;

	if (z < n)
	{
		_putchar('\\');
		z++;
	}
	_putchar('\n');
}
