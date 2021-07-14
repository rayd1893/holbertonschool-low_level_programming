#include <stdlib.h>

/**
 * _strlen - String length
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - Concat
 * @s1: First String
 * @s2: Second String
 * Return: Strings concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len = _strlen(s1) + _strlen(s2);
	int i = 0;
	int j = 0;

	if (len == 0)
	{
		return (0);
	}

	concat = malloc(len + 1);

	while (i < _strlen(s1))
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (j < _strlen(s2))
	{
		*(concat + i + j) = *(s2 + j);
		j++;
	}

	if (concat == NULL)
		return (NULL);

	return (concat);

}
