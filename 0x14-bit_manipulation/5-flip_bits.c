#include "main.h"
/**
 * flip_bits - function that count the number of nits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	int count;

	unsigned long in present;

	unsigned long int s;

	s = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = s >> i;

		if (present & 1)
			count++;
	}
	return (count);
}
