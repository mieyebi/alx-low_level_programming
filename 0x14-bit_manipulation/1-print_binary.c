#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_binary - prints binary representation of a number
*
* @n: number to be converted to binary
*
*/

void print_binary(unsigned long int n)
{
	int a;

	unsigned long int b;

	a = sizeof(n);

	for (; a >= 0; a--)
	{
		b = n >> a;

		if (b & 1)
			putchar('1');
		else
			putchar('0');
	}
}
