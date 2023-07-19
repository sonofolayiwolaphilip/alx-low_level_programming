#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - the pointer to dog_t
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		printf("Memory allocation failed for new dog.\n");
		return (NULL);
	}

	newDog->name = (char *)malloc(strlen(name) + 1);

	if (newDog->name == NULL)
	{
		printf("Memory allocation failed for the name string.\n");
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);
	newDog->owner = (char *)malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		printf("Memory allocation failed for the owner string.\n");
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
