#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees 2-dimensional arrays.
 * @grid: multidimensional array
 * @height: height of the grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height - 1]);
		}
		free(grid);
	}
}
