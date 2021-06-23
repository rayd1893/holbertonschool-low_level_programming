#include "holberton.h"

/**
 * times_table - Print table
 *
 * Return: Print table
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{

			if (i * j < 10)
			{
				_putchar((i * j) + '0');
			}

			else
			{
				r = i * j;

				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
