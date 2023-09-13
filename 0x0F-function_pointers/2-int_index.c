#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @array: array in the function
 * @size: size of array
 * @cmp:function to initiate
 * Return: -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}