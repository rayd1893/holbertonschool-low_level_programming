#include "search_algos.h"
/**
 * linear_search - Search a value
 * @array: Array
 * @size: Size
 * @value: Value to search
 *
 * Return: Position
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
