#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - To check for memory allocation
 * @b: argument
 * Return: appropiate values
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
