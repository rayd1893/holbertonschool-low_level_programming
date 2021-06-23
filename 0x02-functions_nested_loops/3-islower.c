/**
 * _islower - Lower is 1
 * @c: value to evaluate
 *
 * Return: 1 is lower 0 other
 */
int _islower(int c)
{
	int salida;

	if (c >= 97 && c <= 122)
	{
		salida = 1;
	}

	else
	{
		salida = 0;
	}

	return (salida);
}
