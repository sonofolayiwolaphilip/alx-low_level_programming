#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - it can print anything
* @format: types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int f_index = 0;
	char *str_arg, *separator = "";

	va_list args_list;

	va_start(args_list, format);

	if (format)
	{
		while (format[f_index])
		{
			switch (format[f_index])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args_list, double));
					break;
				case 's':
					str_arg = va_arg(args_list, char *);
					if (!str_arg)
						str_arg = "(nil)";
					printf("%s%s", separator, str_arg);
					break;
				default:
					f_index++;
					continue;
			}
			separator = ", ";
			f_index++;
		}
	}

	printf("\n");
	va_end(args_list);
}

