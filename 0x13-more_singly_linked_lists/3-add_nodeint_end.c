#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: the pointer to pointer
 * @n: the new node
 * Return: the appropriate value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *c;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		c = *head;
		while (c->next != NULL)
		{
			c = c->next;
		}

	c->next = new;
	}

	return (new);
}
