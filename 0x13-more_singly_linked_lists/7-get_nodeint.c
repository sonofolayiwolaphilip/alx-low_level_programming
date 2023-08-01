#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function returns nth node of a listint_t linked list.
 * @head: argument or parameter
 * @index: position of the node
 * Return: NULL or present
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present = head;

	unsigned int counter = 0;

	while (present != NULL && counter < index)
	{
		present = present->next;
	}
	if (present == NULL)
	{
		return (NULL);
	}
	return (present);
}
