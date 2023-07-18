#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - main part
 * @dog - structure name
 * @d: pointer
 * @name: pointer
 * @age: furhter details
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
