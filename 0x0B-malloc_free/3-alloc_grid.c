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
	int **griddy, i, k;

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
		for (k = 0; k < width; k++)
		{
			griddy[i][k] = 0;
		}
	}
	return (griddy);
}
