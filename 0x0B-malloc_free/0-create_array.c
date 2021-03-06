#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Creata an array
 * @size: Size of array
 * @c: char
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
