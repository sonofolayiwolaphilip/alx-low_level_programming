#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element
 * @array: pointer to the array
 * @size: The size of the array
 * @action: pointer to the function to execute
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
