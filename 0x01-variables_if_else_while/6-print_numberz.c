#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Print int with putchar
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
