#include "holberton.h"

/**
 * print_alphabet - Print alphabet
 *
 * Return: Alphabet
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}

	_putchar(10);

}
