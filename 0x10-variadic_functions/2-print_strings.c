#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: separator
 * @n: number of byte
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	const char *my;

	va_list mylist;

	va_start(mylist, n);

	if (separator == NULL)
		return;	

	for (i = 0; i < n; i++)
	{
		my = va_arg(mylist, const char *);
		if (my == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", my);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mylist);
}
