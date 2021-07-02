/**
 * _strncpy - Copy string
 * @dest: First string
 * @src: Second string
 * @n: bytes
 *
 * Return: Concatenation
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src)
	{
		dest[i] = *src;
		src++;
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
