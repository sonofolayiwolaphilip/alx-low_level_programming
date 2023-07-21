#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - variadic function for summing arguments
 * @n: last fixed argument before variable arguments
 *
 * Return: 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mynumb;

	int result = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(mynumb, n);

	for (i = 0; i < n; i++)

		result += va_arg(mynumb, int);

	va_end(mynumb);
	return (result);
}
