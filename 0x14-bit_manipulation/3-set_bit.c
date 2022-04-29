#include "main.h"
#include <stdio.h>

/**
* set_bit - sets that value of a bit
*
* @n: pointer to int
*
* @index: index
*
* Return: 1 or -1
*
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 32)
		return (-1);

	a = 1 << index;
	*n = *n | a;
	return (1);
}
