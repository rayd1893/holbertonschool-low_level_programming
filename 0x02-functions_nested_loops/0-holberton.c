#include "holberton.h"

/**
 * main - Main function
 *
 * Return: Print string
 */
int main(void)
{
	int i;
	int n;
	char *texto = "Holberton";

	n = sizeof(texto);

	for (i = 0; i <= n; i++)
	{
		_putchar(texto[i]);
	}

	_putchar('\n');

	return (0);
}
