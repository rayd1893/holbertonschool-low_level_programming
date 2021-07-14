#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Return string
 * @str: string
 * Return: String
 */
char *_strdup(char *str)
{
	char *t;
	int i = 0;
	int s = strlen(str);

	t = malloc(s * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (i <= s)
	{
		t[i] = str[i];
		i++;
	}

	return (t);
}
