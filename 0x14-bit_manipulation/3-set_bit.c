#include <stdio.h>
#include "main.h"
/**
 * set_bit - bit set
 * @n: argument
 * @index: argument
 * Return: to return a value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
