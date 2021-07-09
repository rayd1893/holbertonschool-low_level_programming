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
	int mul = 1;
	*argv[0] = '1';

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (argc--)
	{
		mul *= atoi(*argv++);
	}

	printf("%d\n", mul);

	exit(EXIT_SUCCESS);
}
