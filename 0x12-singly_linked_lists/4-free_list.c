#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *present;

	while (head != NULL)
	{

		present = head;
		head = head->next;

		free(present->str);
		free(present);
	}
}
