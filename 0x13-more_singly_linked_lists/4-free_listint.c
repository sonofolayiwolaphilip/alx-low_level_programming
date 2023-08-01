#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function to clear
 * @head: arguement
 */
void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
