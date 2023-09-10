#include <stdio.h>
/**
 * array_range -  function that creates an array of integers
 * @min: the base of the array
 * @max: the maximum value in the array
 */
int *array_range(int min, int max)
{
	int i, ar;

	if (min > max)
		return (NULL);
	ar = (int *)malloc((max - min)+1);
	for(i = 0; i <= max; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
