#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - memory allocation
 * @b: argument
 *
 * return ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Failed to allocate memory.\n");
		exit(98);
	}
	return (ptr);
}
