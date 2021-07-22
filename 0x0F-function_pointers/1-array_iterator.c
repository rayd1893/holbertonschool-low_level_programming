#include <stddef.h>

/**
 * array_iterator - Iterator of array
 * @array: Array of integers
 * @size: Size of array
 * @action: Function´s name
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
