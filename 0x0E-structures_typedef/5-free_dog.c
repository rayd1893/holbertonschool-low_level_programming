#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free struct
 * @d: struct
 *
 * Return: Free
 */
void free_dog(dog_t *d)
{
	free(d);
}
