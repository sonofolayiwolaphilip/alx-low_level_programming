#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>
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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
