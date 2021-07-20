#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create new dog
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: Dog´s owner
 *
 * Return: Struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *my_dog = malloc(sizeof(*my_dog));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
