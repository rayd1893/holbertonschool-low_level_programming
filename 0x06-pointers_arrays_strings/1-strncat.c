#include <string.h>
#include "holberton.h"

/**
 * _strncat - Concatenate strings
 * @dest: First string
 * @src: Second string
 * @n: bytes
 *
 * Return: Concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[l + i] = *src;
		src++;
		i++;
	}

	dest[i + l] = '\0';
	return (dest);
}
