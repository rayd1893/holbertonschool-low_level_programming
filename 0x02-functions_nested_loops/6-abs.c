/**
 * _abs - Absolute value
 * @n: value to evaluate
 *
 * Return: Always positive
 */
int _abs(int n)
{
	int absolute;

	if (n >= 0)
	{
		absolute = n;
	}

	else
	{
		absolute = n * -1;
	}

	return (absolute);
}
