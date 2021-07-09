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
	printf("%s\n", argv[argc - 1]);

	exit(EXIT_SUCCESS);
}
