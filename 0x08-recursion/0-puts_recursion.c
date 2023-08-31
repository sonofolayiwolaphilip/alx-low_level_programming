#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - recursive puts
 * @s: the input of the function.
 * Return: right value on success or failure
 *
 */

void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
