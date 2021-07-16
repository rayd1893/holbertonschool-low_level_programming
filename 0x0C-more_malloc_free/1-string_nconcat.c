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
 * string_nconcat - Concat string
 * @s1: First string
 * @s2: Second string
 * @n: Bytes
 * Return: Concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lens1 = _strlen(s1);
	unsigned int lens2 = _strlen(s2);
	unsigned int i = 0, j = 0;

	if (lens2 <= n)
	{
		n = lens2;
	}

	concat = malloc((lens1 + n + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	while (i < lens1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (j < n)
	{
		*(concat + i + j) = *(s2 + j);
		j++;
	}

	*(concat + i + j) = '\0';

	return (concat);
}
