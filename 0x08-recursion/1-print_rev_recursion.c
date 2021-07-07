#include "holberton.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: String
 * Return: Print string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
