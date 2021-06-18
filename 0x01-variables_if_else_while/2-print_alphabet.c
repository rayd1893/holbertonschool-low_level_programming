#include <stdio.h>
#include <string.h>

/**
 * main - Main function
 *
 * Return: Print alphabet
 */
int main(void)
{
	char t[70] = "abcdefghijklmnopqrstuvwxyz\n";
	int longitud = strlen(t);
	int i = 0;

	while (i < longitud)
	{
		putchar(t[i]);
		i++;
	}

	return (0);
}
