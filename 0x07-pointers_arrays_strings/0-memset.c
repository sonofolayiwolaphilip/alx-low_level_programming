#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byteto be used to fill the memory area
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s
 * This pointer can be used to continue working with the memory after 
 * it has been filled
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index=0;
	while (index < n)
	{
		*(s + index) = b;
		i++;
	}
	return(s);
}
