#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *present, *next;

	present = head;

	while (present != NULL)
	{
		next = present->next;
		free(present);
		present = next;
	}
}
