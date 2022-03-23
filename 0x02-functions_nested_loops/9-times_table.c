#include "main.h"

/**
*times_table - prints the 9 times table
*
*/
void times_table(void)
{
	int i, j;

	i = 0;

	j = 0;

	while (j <= 9)
	{
		while (i <= 9)
		{
			_putchar(i * 9);
			i++;
		}
		_putchar('\n');
		j++;
	}
}

