#include <string.h>

/**
 * _strcat - Concatenate strings
 * @dest: First string
 * @src: Second string
 *
 * Return: Concatenation
 */
char *_strcat(char *dest, char *src)
{
	int l = strlen(dest);
	int i = l;

	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
