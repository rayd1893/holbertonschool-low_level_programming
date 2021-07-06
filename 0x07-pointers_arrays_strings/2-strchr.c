/**
 * _strchr - Print char
 * @s: String
 * @c: Find
 * Return: String
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
