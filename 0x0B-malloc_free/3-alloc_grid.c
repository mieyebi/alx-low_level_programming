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
	int *w;
	int *h;

	int x, y;

	x = y = 0;

	while (x < width)
		x++;

	while (y < height)
		y++;

	w = malloc(x * sizeof(int));
	h = malloc(y * sizeof(int));

	 if (width <= '0')
        return (NULL);

        if (height <= '0')
        return (NULL);

        a = malloc((x * y) * sizeof(int));

        if (a == 0)
        return (NULL);

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
