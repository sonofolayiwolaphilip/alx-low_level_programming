#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - intialize structure
 * @name: expected value
 * @age:expected value
 * @owner:expected value
 * @d: pointer to the struct function.
 * Return: appropriate values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->age = age;
	d->name = strdup(name);
	d->owner = strdup(owner);
}
