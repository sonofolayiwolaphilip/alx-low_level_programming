#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - To adds a new node.
 * @head: points to the head of the linked list.
 * @str: Pointer to the string value for the new node.
 *
 * Return: returns NULL on failure.
 */
list_t *add_node_end(list_t **head,
		const char *str)
{
	list_t *my_new_node;

	if (str == NULL)
		return (NULL);

	my_new_node = malloc(sizeof(list_t));
	if (my_new_node == NULL)
		return (NULL);

	my_new_node->str = strdup(str);
	if (my_new_node->str == NULL)
	{
		free(my_new_node);
		return (NULL);
	}
		my_new_node->len = strlen(str);

		my_new_node->next = NULL;

		if (*head == NULL)
		{
			*head = my_new_node;
		}
		else
		{
			list_t *current = *head;

			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = my_new_node;
		}
		return (my_new_node);
}
