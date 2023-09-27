#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to pointer
* Return: appropriate values
*/

int pop_listint(listint_t **head)

{

	listint_t *present;

	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	present = (*head)->next;
	free(*head);
	*head = present;

	return (num);
}
