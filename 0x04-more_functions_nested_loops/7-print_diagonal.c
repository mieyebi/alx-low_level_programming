#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal line on the terminal using /
* @n: the number of times to print /
*
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int x, y;

		x = 0;

		while (x < n)
		{
			y = 0;

			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			if (x != (n - 1))
				_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
