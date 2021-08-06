#include "main.h"

/**
 * division - Divide two number
 * @a: First number
 * @b: Second number
 *
 * Return: Division
 */
int division(int a, int b)
{
	int count = 0;

	while (a >= b)
	{
		a -= b;
		count++;
	}

	return (count);
}

/**
 * residue - Divide two number
 * @a: First number
 * @b: Second number
 *
 * Return: Residue
 */
int residue(int a, int b)
{
	while (a >= b)
		a -= b;

	return (a);
}

/**
 * print_binary - Print binary from decimal number
 * @n: Decimal number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;

	if (n < 2)
	{
		_putchar((n & 1) + '0');
		return;
	}

	a = residue(n, 2);
	n = division(n, 2);
	print_binary(n);
	_putchar('0' + a);
}
