#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function given
 * @array: pointer array
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: appropriate value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL && action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
