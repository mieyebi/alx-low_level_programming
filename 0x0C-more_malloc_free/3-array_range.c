#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *array_range - crestes an array of integers
*
* @min: an integer
*
* @max: an integer
*
* Return: NULL or pointer to array
*
*/
int *array_range(int min, int max)
{
	int *p, a, b;

	a = 0;

	b = 0;

	if (min > max)
		return (NULL);
	while (a >= min && a <= max)
		a++;
	p = malloc(a * sizeof(int));

	if (p == 0)
		return (NULL);
	while (min < max)
	{
		p[b] = min;
		b++;
		min++;
	}
	return (p);
}
