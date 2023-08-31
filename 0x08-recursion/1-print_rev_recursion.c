#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - recursion
 * @s: the characters
 * Return: appropriate value
 *
 */
void _print_rev_recursion(char *s)
{
	int count;

	count = 0;
	while ((s[count] != '\0'))
	{
	count++;
	}

	while (count > 0)
	{
		count--;
		_putchar(s[count]);
	}
}
