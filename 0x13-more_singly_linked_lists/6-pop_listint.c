#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to free a list
 * @head: associated pointer argument
 * Return: return to main if NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *m_temp = *head;
	int data = 0;
	if (head == NULL || *head == NULL)
		return (0);
	
	data = m_temp->n;
	*head = (*head)->next;
	free(m_temp);
	return (data);
}
