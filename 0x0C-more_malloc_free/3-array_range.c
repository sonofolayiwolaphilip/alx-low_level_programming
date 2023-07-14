#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create array of integers in given range
 * @min: Minimum value of the range
 * @max: Maximum value of the range
 *
 * Return: Pointer to the newly creat
 **/
int *array_range(int min, int max)
{
	int size, i;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

