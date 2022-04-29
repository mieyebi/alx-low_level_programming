#include "main.h"
#include <stdio.h>

/**
* flip_bits - flip bits 
*
* @n: unsigned long int
*
* @m: unsigned long int
*
* Return: number of bits to flip
*
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;

	a = b = 0;

	a = m ^ n;

	while (a != 0)
	{
		if (a & 1)
		{
			b++;
		}
		a = a >> 1;
	}
	return (b);
}
