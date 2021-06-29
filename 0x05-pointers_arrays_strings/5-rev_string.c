#include "holberton.h"
#include <string.h>

/**
 * rev_string - Get reverse
 * @s: String
 *
 * Return: Get reverse
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char cad[100];

	int l = strlen(s);

	for (i = l - 1; i >= 0; i--)
	{
		cad[j] = s[i];
		j++;
	}

	for (i = 0; i < l; i++)
	{
		s[i] = cad[i];
	}
}
