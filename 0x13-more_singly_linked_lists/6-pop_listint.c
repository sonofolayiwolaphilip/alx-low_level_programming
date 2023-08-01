#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to free a list
 * @head: associated pointer argument
 * Return: return to main if NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *the_head;

	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	the_head = *head;
	data = the_head->n;

	*head = the_head->next;
	free(the_head);
	return (data);
}
