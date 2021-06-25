/**
* _isupper - Validate upper
* @c: input
* Return: if upper return 1, other return 0
*/
int _isupper(int c)
{
	int v;

	if (c >= 65 && c <= 90)
	{
		v = 1;
	}

	else
	{
		v = 0;
	}

	return (v);
}
