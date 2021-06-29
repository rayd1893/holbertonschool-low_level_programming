#include <string.h>
#include "holberton.h"

/**
 * puts2 - Return string
 * @str: String
 *
 * Return: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
