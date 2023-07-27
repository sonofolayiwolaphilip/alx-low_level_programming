#include <stddef.h>

typdef struct node {
	char *str;
	size_t len;
	struct node *next;
} list_t;
/**
 * list_len - list len
 * @h: pointer
 *
 * Return: return
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
