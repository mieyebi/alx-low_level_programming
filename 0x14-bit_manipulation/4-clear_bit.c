#include "main.h"
#include <stdio.h>

/**
* clear_bit - sets that value of a bit
*
* @n: pointer to int
*
* @index: index
*
* Return: 1 or -1
*
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 64)
		return (-1);

	a = 0 << index;
	*n = *n & a;
	return (1);
}
