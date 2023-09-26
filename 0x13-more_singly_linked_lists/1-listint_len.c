#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * listint_len - function to return the number of elements
 * @h: the pointer to the node
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
