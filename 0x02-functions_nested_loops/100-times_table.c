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
	for (n = 0; n >= 0 && n <= 15; n++)
	{
		int a;

		for (a = 0; a <= n; a++)
		{
			int b = (a * n);

			if (a < n)
			{
				if (b >= 0 && b <= 9)
				{
					_putchar(b);
					_putchar(',');
					_putchar(' ');
				}
				else if (b > 9)
				{
					_putchar(b / 10);
					_putchar(b % 10);
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (a == n)
			{
				if (b >= 0 && b <= 9)
				{
					_putchar(b);
				}
				else if (b > 9)
				{
					_putchar(b / 10);
					_putchar(b % 10);
				}
			}
		}
	}
}

