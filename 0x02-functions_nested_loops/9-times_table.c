#include "main.h"

/**
*times_table - prints the 9 times table
*
*/
void times_table(void)
{
	int i, j, n;

	i = 0;

	j = 0;

	n = 9;

	while (j <= 9)
	{
		while (i <= 9)
		{
			_putchar(i * n);
			i++;
		}
		_putchar('\n');
		j++;
	}
}

