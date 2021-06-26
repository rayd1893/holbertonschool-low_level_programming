#include "holberton.h"

/**
 * print_triangle - Print triangle
 * @size: value
 * Return: Triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 1; i <= size ; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar(10);
		}

	}

	else
	{
		_putchar(10);
	}

}
