
#include "main.h"
#include <stdio.h>

/**
* get_bit - returns the value of bit at a given index
*
* @n: unsigned long int
*
* @index: index from which bit returns
*
* Return: value of index or -1;
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;
	int b;

	if (n == 0)
		return (-1);

	for (a = 0; a < index; a++)
	{
		b = n >> 1;
	}
	return(b & (1 << index));
}

