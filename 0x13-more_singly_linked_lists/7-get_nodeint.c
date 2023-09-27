#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
* get_nodeint_at_index - function that returns the node
* @head: pointer
* @index: index of the node
* Return: The appropriate values
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	listint_t *temp;

	temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
