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
	listint_t *next, *pres;

	pres = *head;
	while (pres != NULL)
	{
		next = pres->next;
		free(pres);
		pres = next;
	}
	*head = NULL;
}
