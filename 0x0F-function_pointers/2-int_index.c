#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Pointer to the arry of integers
 * @size: The number of elements in the array
 * @cmp: The pointer to the function used to compare values
 * Return: retun 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
