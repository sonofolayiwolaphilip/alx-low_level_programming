#include "main.h"
#include <stdio.h>
/**
 * get_bit - function to get bit
 * @n: arguement
 * @index: argument
 * Return: to return appropriate values
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_content;
	unsigned long int moved;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	moved = n >> index;
	bit_content = moved & 1;

	return (bit_content);
}
