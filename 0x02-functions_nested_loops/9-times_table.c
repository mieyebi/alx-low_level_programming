#include "main.h"

/**
*times_table - prints the 9 times table
*
*/
void times_table(void)
{
	int a, b, c;

	a = 0;

	b = 0;

	c = (a * b);

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (c == 0)
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((c <= 9) && (c != 0))
			{
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (c > 9)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

