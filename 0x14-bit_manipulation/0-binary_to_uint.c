#include <stddef.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: pointer to string of binary numbers
 * Return: 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	int j, i;

	unsigned int output;

	output = 0;

	j = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < j; i++)
	{
		if (b[i] == '1')
		{
			output = (output << 1) | 1;
		}
		else if (b[i] == '0')
		{
			output = output << 1;
		}
		else
		{
			return (0);

		}
	}
	return (output);
}
