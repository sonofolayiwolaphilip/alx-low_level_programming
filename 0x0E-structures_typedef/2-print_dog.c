#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - structure dog print
 * @d: the pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
