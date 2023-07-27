#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * print_list - print list
 * @h: the arguement container declared as aconst list_t
 *
 * Return: return count
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%lu] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}

	return (count);
}
