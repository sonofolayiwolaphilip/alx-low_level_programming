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

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}
	while (h != NULL)
	{
		printf("%s ", h->str);
		h = h->next;
		count++;
	}
	printf("\n");
	return (count);
}
