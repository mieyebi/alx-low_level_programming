#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - function call to return pointer to 2 dimensional array of integers
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
	int *w, *h;
	int x, y, b, c;

	x = y = 0;

	if (width <= '0' || height <= '0')
	return (NULL);

	b = sizeof(width);
	c = sizeof(height);

	a = malloc((b * c) * sizeof(int));

	if (a == 0)
	return (NULL);

	while (x < width)
		x++;

	while (y < height)
		y++;

	w = malloc(x * sizeof(int));
	h = malloc(y * sizeof(int));

	while (w[x] != '\0')
	{
		w[x] = '0';
		x++;
		while (h[y] != '\0')
		{
			a[x][y] = '0';
			y++;
		}
	}
	return (a);
}
