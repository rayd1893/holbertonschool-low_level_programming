#include "holberton.h"

/**
 * more_numbers - Print numbers
 *
 * Return: numbers from 0 to 14
 */
void  more_numbers(void)
{
	int i;
	int j;
	int dec;
	int uni;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				uni = j;
				dec = 0;
			}

			else
			{
				uni = j % 10;
				dec = j / 10;
			}

			if (j >= 10)
			{
				_putchar('0' + dec);
			}

			_putchar('0' + uni);

		}
		_putchar(10);
	}
}
