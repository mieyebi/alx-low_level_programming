#include "main.h"

/**
*times_table - prints the 9 times table
*
*/
void times_table(void)
{
	int i, j;

	while (j >= 0)
	{
		while (i >= 0)
		{
			_putchar((9 * i));
			_putchar(',');
			_putchar(' ');
			i++;
		}
		_putchar('\n');
		j++;
	}
}

