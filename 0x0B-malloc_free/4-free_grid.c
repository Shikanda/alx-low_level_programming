#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*free_grid - frees a 2d array in previous task
*@height: array integer
*@grid: the 2d array
*Return: NULL if size is 0 or pointer to the array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
