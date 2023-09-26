#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * @h: pointer to the node
 *
 * Return: apporpriate value
 */
size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}

	return (sum);
}
