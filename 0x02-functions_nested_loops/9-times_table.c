#include "main.h"

/**
*times_table - prints the 9 times table
*
*/
void times_table(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; 1 <= 9; i++)
		{
			_putchar((9 * i));
		}
		_putchar('\n');
	}
}

