#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip bits
 * @n: arguement
 * @m: argument
 * Return: return the right values
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n * m;
	unsigned int counter = 0;

	while (result)
	{
		counter += result & 1;
		result >>= 1;
	}

	return (counter);
}

