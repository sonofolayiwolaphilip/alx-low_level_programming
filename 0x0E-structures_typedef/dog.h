#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name of structure
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char name[50];
	float age;
	char owner[50];
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
