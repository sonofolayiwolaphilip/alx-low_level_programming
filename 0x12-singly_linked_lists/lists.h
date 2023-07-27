#ifndef LIST_H
#define LIST_H

#include <stddef.h> 

typedef struct list_node
{
	char *str;
	size_t len;
	struct list_node *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);
#endif
