#include <stdio.h>
#include "function_pointers.h"
#include "_putchar.c"
/**
 * print_name - prints the name using the provided function.
 * @name: The name to print
 * @f: The function to use for printing the name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	_putchar('\n');
}
