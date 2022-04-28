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

	else
	while (b[a] != '\0')
		a++;

	while (a >= 0)
	{
		if (b[a] > '1' || b[a] < '0')
		{
			break;
			return (0);
		}
		else
		if (b[a] == '0' || b[a] == '1')
		{
			sum += (b[a] * mul2);
		}
		a--;
		mul2 = (mul2 * 2);
	}
	return (sum);
}
