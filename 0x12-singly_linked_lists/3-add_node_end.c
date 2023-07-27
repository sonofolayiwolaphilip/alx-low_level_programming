#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @str: Pointer to the string value for the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_new_code;

	if (str == NULL)
		return (NULL);

	my_new_node = malloc(sizeof(list_t));
	if (my_new_code == NULL)
		return (NULL);

	my_new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(my_new_node);
		return (NULL);
	}
		my_new_node->len = strlen(str);

		my_new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
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
