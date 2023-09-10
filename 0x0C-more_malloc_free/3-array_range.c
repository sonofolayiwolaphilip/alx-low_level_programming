#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers
 * @min: the base of the array
 * @max: the maximum value in the array
 */
int *array_range(int min, int max)
{
	int i, *ar, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = (int *)malloc(sizeof(int) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
