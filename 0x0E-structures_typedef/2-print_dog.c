#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print struct dog
 * @d: Struct dog
 *
 * Return: Print
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);

		printf("Age: %.1f\n", d->age);

		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
