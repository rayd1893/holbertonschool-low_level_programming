#include "dog.h"

/**
 * init_dog - To start struct
 * @d: Struct dog
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: Dog´s owner
 *
 * Return: Start struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
