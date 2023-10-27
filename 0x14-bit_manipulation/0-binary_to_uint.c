#include <stddef.h>
<<<<<<< HEAD
#include <string.h>
=======
#include "main.h"
>>>>>>> 8b3aa42e5d816efabc7efe4ceeb4fd5c62fe9090
/**
 * binary_to_uint - binary to unsigned int
 * @b: pointer to string of binary numbers
 * Return: 0 on failure                                */                                                   unsigned int binary_to_uint(const char *b)
{
	int j, i;

	unsigned int output = 0;

<<<<<<< HEAD
	j = strlen(b);
=======
	unsigned int output;

	output = 0;

>>>>>>> 8b3aa42e5d816efabc7efe4ceeb4fd5c62fe9090
	if (b == NULL)
	{
		return (0);
	}
<<<<<<< HEAD
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
=======
	else
	{
		for (j = 0; b[j]; j++)
		{
			if (b[j] < '0' || b[j] > '1')
				return (0);
			output = a * output + (b[j] - '0');
>>>>>>> 8b3aa42e5d816efabc7efe4ceeb4fd5c62fe9090
		}
	}
	return (output);
}

