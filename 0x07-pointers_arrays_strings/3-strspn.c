/**
 * _strspn - Search string
 * @s: String
 * @accept: String to find
 * Return: Count of ocurrence
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, var;
	int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		var = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				var = 1;
				break;
			}
		}
		if (var == 1)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
