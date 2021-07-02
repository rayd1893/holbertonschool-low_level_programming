/**
 * reverse_array - Print array in reverse
 * @a: array
 * @n: size of array
 * 
 * Return: Array in reverse
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
