#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - to free grid
 * @grid: pointer of pointer
 * @height: parameter
 * Return: checks if the grid is freed
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid[i]);
}
