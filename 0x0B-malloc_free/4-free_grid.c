#include "main.h"
#include <stdlib.h>

/**
  *free_grid - function to free the memory space of 2D array
  *@height: number of rows of 2D array
  *@grid: 2D array
  *Return; void
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
