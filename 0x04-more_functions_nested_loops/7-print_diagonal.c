#include "holberton.h"

/**
 * print_diagonal - Print diagonal
 * @n: value
 * Return: Diagonal
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{

		for (i = 1; i <= n ; i++)
		{
			for (j = 1; j <=  i; j++)
			{
				_putchar(' ');
			}
			_putchar('/');
			_putchar(10);
		}

	}

	else
	{
		_putchar(10);
	}

}
