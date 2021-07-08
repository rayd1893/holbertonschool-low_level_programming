/**
 * factorial - Factorial
 * @n: number
 * Return: Factorial from number
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	if (n <= 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
