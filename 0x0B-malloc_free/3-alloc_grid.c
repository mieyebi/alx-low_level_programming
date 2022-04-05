#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
* **alloc_grid - return pointer to 2 dimensional array of integers
*
* @width: 1st array dimension
*
* @height: second array dimension
*
* Return: NULL or a pointer
*
*/
int **alloc_grid(int width, int height)
{
	int **a;
	/*int *b;*/
	int x, y, z;

	x = y = z = 0;

	if (width <= '0' || height <= '0')
	return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == 0)
	return (NULL);

	while (x < width)
	{
		while (y < height)
		{
			a[x][y] = '0';
			y++;
		}
		x++;
	}
	return (a);
}
