#include "main.h"
#include <stddef.h>
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int output;

	size_t len, m, i;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

	}

	output = 0;
	for (m = 0; m < len; ++m)
	{
		output = output * 2 + (b[m] - '0');
	}
	return (output);
}

