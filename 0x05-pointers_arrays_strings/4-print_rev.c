#include <string.h>
#include "holberton.h"

/**
 * print_rev - Print reverse
 * @s: String
 *
 * Return: Print reverse
 */
void print_rev(char *s)
{
	int i;

	int l = strlen(s);

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
