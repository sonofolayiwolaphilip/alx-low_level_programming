#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function to print all the elements of the linked list
 * @h: The head of the linked list
 *
 * Return: The number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n",(unsigned int) h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
