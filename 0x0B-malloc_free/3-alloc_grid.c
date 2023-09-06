#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * alloc_grid - grid function
 * @width: parameter
 * @height: parameter
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **griddy, i, k, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	griddy = (int **)malloc(height * sizeof(int));
	if (griddy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		griddy[i] = (int *)malloc(width * sizeof(int));
		if (griddy[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(griddy[j]);
			}
			free(griddy);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			griddy[i][k] = 0;
		}
	}
	return (griddy);
}
