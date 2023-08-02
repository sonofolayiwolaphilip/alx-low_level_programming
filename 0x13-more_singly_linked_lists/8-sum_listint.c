#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function to sum node data
 * @head: Argument
 * Return: To return total
*/
int sum_listint(listint_t *head)
{
	int total;

	total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
