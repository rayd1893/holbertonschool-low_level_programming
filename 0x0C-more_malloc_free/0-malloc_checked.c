#include <stdlib.h>

/**
 * malloc_checked - Check malloc
 * @b: size
 * Return: Check malloc
 */
void *malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);

	if (f  == NULL)
	{
		exit(98);
	}

	return  (f);
}
