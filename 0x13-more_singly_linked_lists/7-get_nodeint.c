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
	unsigned int counter;
	listint_t *present;

	present = head;


	counter = 0;
	while (present != NULL &&  counter < index)
	{
		present = present->next;
		counter++;
	}
	if (present == NULL)
	{
		return (NULL);
	}
	return (present);
}
