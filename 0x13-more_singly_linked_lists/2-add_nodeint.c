#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - instance of the stucture
 * @head: The position to insert
 * @n: A part of the adding process
 * Return:return newNode upon success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Nodetoadd = malloc(sizeof(listint_t));

	if (Nodetoadd == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return (NULL);
	}

	Nodetoadd->n = n;
	Nodetoadd->next = *head;
	*head = Nodetoadd;

	return (Nodetoadd);
}
