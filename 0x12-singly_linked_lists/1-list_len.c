#include <stdlib.h>
#include "lists.h"
/**
 * lists_len - function that returns the number of elements in a linked
* @h:associating argument
* Return: appropriate values 
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);

}
