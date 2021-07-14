#include <stdlib.h>
#include "holberton.h"

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

	while (*s)
	{
		i++;
	}

	return (i);
}

/**
 * _strdup - Return string
 * @str: string
 * Return: String
 */
char *_strdup(char *str)
{
	char *t;
	int i = 0;

	t = (char *)malloc(_strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (t == NULL)
	{
		return (NULL);
	}

	while (i < _strlen(str))
	{
		t[i] = str[i];
		i++;
	}

	return (t);
}
