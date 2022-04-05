#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int x, y;

	x = y = 0;

	if (width <= '0' || height <= '0')
	return (NULL);

	while (width != 0)
		x++;

	while (height != 0)
		y++;

	a = malloc((width * height) * sizeof(int));

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
