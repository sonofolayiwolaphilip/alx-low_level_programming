#include <stddef.h>
#include "lists.h"

/**
 * list_len - The total mumber of element is returned
 * @h: Points to the head
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t my_count;

	my_count = 0;

	while (h != NULL)
	{
		h = h->next;
		my_count++;
	}

	return (my_count);
}
