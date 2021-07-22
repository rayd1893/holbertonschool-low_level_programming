/**
 * int_index - Return index
 * @array: Array of integers
 * @size: Size of array
 * @cmp: Function´s name
 *
 * Return: Index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return -1;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return i;
		}
	}

	return -1;
}
