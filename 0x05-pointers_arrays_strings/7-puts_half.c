#include <string.h>
#include "holberton.h"

/**
 * puts_half - Return half
 * @str: String
 *
 * Return: Half
 */
void puts_half(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (l % 2 == 0)
		{
			if (i >= l / 2)
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i >= (l + 1) / 2)
			{
				_putchar(str[i]);
			}
		}

	}

	_putchar('\n');
}
