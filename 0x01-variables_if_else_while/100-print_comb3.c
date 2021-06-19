#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Print two digits
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j )
			{
				putchar(i);
				putchar(j);
			}

			if (i < 57 && j < 57 && i <= j && (i != 48 || j != 48))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
