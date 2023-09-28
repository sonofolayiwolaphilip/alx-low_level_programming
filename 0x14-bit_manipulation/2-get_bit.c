#include "main.h"
/**
 * get_bit - Function that return the value of a bit at an index in a decimal
 * @n: nubmer to search
 * @index: index of the bit
 * Return: appropriate value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
