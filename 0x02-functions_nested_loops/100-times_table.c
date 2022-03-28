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
		for (c = 0; c <= n; c++)
		{
			for (a = 0; a <= c; a++)
			{
				if (a < c)
				{
					b = (a * c);

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
				else if (a == c)
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
}
