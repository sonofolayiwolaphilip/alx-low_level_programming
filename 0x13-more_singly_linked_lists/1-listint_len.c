#include <stddef.h>
#include "lists.h"

/**
 * listint_len - the function
 * @h: the arguement
 * Return: value to return to the calling function
 */
size_t listint_len(const listint_t *h)
{
	size_t mycount = 0;
	const listint_t *present = h;

	while (present != NULL)
	{
		mycount++;
		present = present->next;
	}
	return (mycount);
}
