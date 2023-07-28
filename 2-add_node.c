#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - it Adds a new node in front of a list_t list.
 * @head: pointer to the head of the list
 * @str: Pointer to the string value to be added.
 *
 * Return: returns null if string
 */
list_t *add_node(list_t **head,
			const char *str)
{
	list_t *my_new_node;

	if (str == NULL)
	return (NULL);

	my_new_node =
		malloc(sizeof(list_t));

	if (my_new_node == NULL)
		return (NULL);
	my_new_node->str = strdup(str);

	if (my_new_node->str == NULL)
	{
		free(my_new_node);
		return (NULL);
	}

	my_new_node->len = strlen(str);

	my_new_node->next = *head;

	*head = my_new_node;

	return (my_new_node);
}
