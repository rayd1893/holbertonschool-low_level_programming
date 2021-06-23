/**
 * _isalpha - Alpha is 1
 * @c: value to evaluate
 *
 * Return: 1 is alpha 0 other
 */
int _isalpha(int c)
{
	int salida;

	if (c >= 97 && c <= 122)
	{
		salida = 1;
	}

	else if (c >= 65 && c <= 90)
	{
		salida = 1;
	}

	else
	{
		salida = 0;
	}

	return (salida);
}
