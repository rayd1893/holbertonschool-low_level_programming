#include <stdio.h>
#include <string.h>

/**
 * main - Main function
 *
 * Return: Print a message with putchar
 */
int main(void)
{
	char texto[100]  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int longitud = strlen(texto);
	int i = 0;
	while(i < longitud)
	{
		putchar(texto[i]);	
		i++;
	}

	return (1);
}
