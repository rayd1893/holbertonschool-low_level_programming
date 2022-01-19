#include "search_algos.h"
/**
 * print_array - Print Array
 * @array: Array
 * @start: Start
 * @size: End
 */
void print_array(int *array, size_t start, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < size - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);

}

/**
 * binary_search - Binary search
 * @array: Array
 * @size: Size of array
 * @value: Value to search
 * Return: Index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l;
	size_t r;
	size_t m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size;
	while (l <= r && l < size)
	{
		print_array(array, l, r);
		m = (l + r) / 2;

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}
