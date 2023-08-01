#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function to add node to the end of list
 * @n: arguement passed into the function
 * Return: return the add new node to the list
 * @head: memer of arugments
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mynode = (listint_t *)malloc(sizeof(listint_t));

	if (mynode == NULL)
	{
	return (NULL);
	}
	mynode->n = n;
	mynode->next = NULL;

	if (*head == NULL)
	{
		*head = mynode;
	}
	else
	{
		listint_t *present = *head;

		while (present->next != NULL)
		{
			present = present->next;
		}
		present->next = mynode;
	}
	return (mynode);
}
