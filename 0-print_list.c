#include <stdio.h>
#include "lists.h"

/**
 * print_list - the print function
 * @h: pointer
 * Return: it returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t my_count;

	my_count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", (unsigned int) h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		my_count++;
	}
	return (my_count);
}
