#include "main.h"
#include <stdio.h>

/**
* print_times_table - prints the n times table
*
* @n: is an integer
*
*/

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if ((b == n) && (c >= 0 && c <= 9))
				{
					_putchar(c);
				}
				else if ((b < n) && (c >= 0 && c <= 9))
				{
					_putchar(c % 10);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (b == n && c > 9)
				{
					_putchar(c / 10);
					_putchar(c % 10);
				}
				else if (b != n && c > 9)
				{
					_putchar(c / 10);
					_putchar(c % 10);
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
