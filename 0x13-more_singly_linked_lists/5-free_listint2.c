#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function to  frees a listint_t list
 * @head: argument
 */
void free_listint2(listint_t **head)
{
	listint_t *dept_temp;
	listint_t *moment_current;

	if (head == NULL || *head == NULL)
		return;

	moment_current = *head;
	while (moment_current != NULL)
	{
		dept_temp = moment_current;
		moment_current = moment_current->next;
		free(dept_temp);
	}
	*head = NULL;
}
