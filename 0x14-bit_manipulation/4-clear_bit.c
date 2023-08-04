#include "main.h"
/**
 * clear_bit - to cleaer bit
 * @n: arguement
 * @index: argument
 * Return: return accordingly
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);

	}
	copy = ~(1UL << index);
	*n &= copy;

	return (0);
}
