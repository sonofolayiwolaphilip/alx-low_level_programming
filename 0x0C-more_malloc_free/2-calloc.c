#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: argument
 * @size: argument
 * Return appropriate values
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}	

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return(NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);

}
