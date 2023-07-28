#include <stdlib.h>
#include "lists.h"

/**
 * free_list - to Free a list_t list.
 * @head: Points to the head of the linked list
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
