#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 on success and 0 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
