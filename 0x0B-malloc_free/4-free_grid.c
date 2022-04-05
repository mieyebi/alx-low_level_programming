#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
* free_grid - frees a two dimensional grid
*
* @grid: pointer to pointer of a two dim. array
*
* @height: column
*
*/

void free_grid(int **grid, int height __attribute__ ((unused)))
{
	if (grid != NULL)
	{
		free(*grid);
		free(grid);
	}
}
