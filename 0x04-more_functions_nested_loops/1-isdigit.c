/**
* _isdigit - Validate digit
* @c: input
* Return: if digit return 1, other return 0
*/
int _isdigit(int c)
{
	int v;

	if (c >= 48 && c <= 57)
	{
		v = 1;
	}

	else
	{
		v = 0;
	}

	return (v);
}
