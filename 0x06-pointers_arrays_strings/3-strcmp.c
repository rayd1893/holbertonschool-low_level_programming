/**
 * _strcmp - Compare strings
 * @s1: First String
 * @s2: Second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
