#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - tp print string length
 * @s: the string involved
 * Return: appropriate value
 */

int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s == '\0')
	{
		return (count);
	}

	return (1 + _strlen_recursion(s + 1));

}
