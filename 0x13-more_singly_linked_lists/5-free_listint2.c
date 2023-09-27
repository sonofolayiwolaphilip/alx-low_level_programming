#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list
 * @head: the pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *pres;

	if (head == NULL)
		return;

	while (*head)
	{
		pres = (*head)->next;
		free(*head);
		*head = pres;
	}
	*head = NULL;
}
