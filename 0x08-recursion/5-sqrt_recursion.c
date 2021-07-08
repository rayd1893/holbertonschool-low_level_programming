/**
 * sqrt_find - Iterator
 * @n: Number
 * @i: Iterator
 * Return: square
 */
int sqrt_find(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}

	return (sqrt_find(n, i + 1));
}

/**
 * _sqrt_recursion - Square
 * @n: Number
 * Return: square
 */
int _sqrt_recursion(int n)
{
	return (sqrt_find(n, 1));
}
