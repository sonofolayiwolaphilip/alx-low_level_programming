#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * @n: number of argument
 * Return: sum on success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sums = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sums += va_arg(args, int);
	va_end(args);
	return (sums);
}
