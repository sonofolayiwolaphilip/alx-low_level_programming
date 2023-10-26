#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: pointer to string of binary numbers
 * Return: 0 on failure                                */                                                   unsigned int binary_to_uint(const char *b)
{
	int j;

	const int a = 2;

	unsigned int output;

	output = 0;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 0; b[j]; j++)
		{
			if (b[j] < '0' || b[j] > '1')
				return (0);
			output = a * output + (b[j] - '0');
		}
	}
	return (output);
}

