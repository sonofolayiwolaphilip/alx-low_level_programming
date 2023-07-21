#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - the print numbers and seperator function
 * @separator: seperator
 * @n: the fixed argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
			printf("%d", num);

	if (i < (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
