#include <stdio.h>
#include <string.h>

/**
 * main - Main function
 *
 * Return: Print a message without printf or puts
 */
int main(void)
{
	char t[70] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int longitud = strlen(t);
	int i = 0;

	while (i < longitud)
	{
		putchar(t[i]);
		i++;
	}

	return (1);
}
