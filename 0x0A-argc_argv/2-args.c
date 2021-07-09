#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	exit(EXIT_SUCCESS);
}
