#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Print two digits
 */
int main(void)
{
	int i = 48;
	int j;

	while (i <= 57)
	{
		j = 48;

		while (j <= 57)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
			}

			if (i < 57 && j < 57 && i <= j && (i != 48 || j != 48))
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
