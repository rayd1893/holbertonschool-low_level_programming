#include "holberton.h"

/**
 * print_sign - Lower is 1
 * @n: value to evaluate
 *
 * Return: +, -, 0
 */
int print_sign(int n)
{
	int salida;

	if (n > 0)
	{
		salida = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		salida = 0;
		_putchar('0');
	}

	else
	{
		salida = -1;
		_putchar('-');
	}

	return (salida);
}
