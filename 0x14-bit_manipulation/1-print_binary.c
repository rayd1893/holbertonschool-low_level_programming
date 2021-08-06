#include "main.h"


/**
 * print_binary - Print binary from decimal number
 * @n: Decimal number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
