#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print structur
 * @d: instance of structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL || d->name == NULL || d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
