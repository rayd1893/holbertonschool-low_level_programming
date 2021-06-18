#include <stdio.h>
#include <string.h>

/**
 * main - Main function
 *
 * Return: Print alphabet without e and q
 */
int main(void)
{
	char t[70] = "abcdefghijklmnopqrstuvwxyz\n";
	int longitud = strlen(t);
	int i = 0;

	while (i < longitud)
	{
		if (t[i] != 'e' && t[i] != 'q')
		{
			putchar(t[i]);
		}

		i++;
	}

	return (0);
}
