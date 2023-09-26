#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds new node at the beginning
 * @head: pointer to pointer
 * @n: content of the new new node
 * Return: the appropriate value from the function
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
