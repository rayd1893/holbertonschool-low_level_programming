/**
 * _strcpy - Copy string from src to dest
 * @dest: Destination
 * @src: Source
 *
 * Return: Copy string
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
