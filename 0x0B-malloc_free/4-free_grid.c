#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: void
 */

void free_grid(int **grid, int height)

{

	int l;

	for (l = 0; l < height; l++)

	{

		free(grid[l]);

	}

	free(grid);

}
