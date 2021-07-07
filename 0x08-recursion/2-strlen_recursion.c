/**
 * _strlen_recursion - Count char in string
 * @s: String
 * Return: Lenght from string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
