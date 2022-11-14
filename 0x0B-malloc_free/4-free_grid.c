#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees a 2-dimensional arrays of integers
  * @grid: The 2-dimensional array of integers to be freed
  * @height: The height of the grid
  * Return: Free'd grid
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}

