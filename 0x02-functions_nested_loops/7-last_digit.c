#include "holberton.h"

/**
 * print_last_digit - Last digit
 * @n: value to evaluate
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = n * -1;
	}

	last = n % 10;

	_putchar(last + '0');
	return (last);
}
