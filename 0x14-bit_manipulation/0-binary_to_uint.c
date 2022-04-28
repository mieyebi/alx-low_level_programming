#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - converts binary to an integer
*
* @b: string of binary characters
*
* Return: unsigned integer or 0
*
*/

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int mul2 = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[a] != '\0')
		a++;

	a = a - 1;

	while (a >= 0)
	{
		if (b[a] != '1' && b[a] != '0')
		{
			return (0);
		}
		sum += (b[a] - '0') * mul2;
		a--;
		mul2 *= 2;
	}
	return (sum);
}
