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
	int sum = 0;
	*argv[0] = '1';

	while (argc--)
	{
		if (atoi(*argv) == 0 && **argv != 48)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*argv++);
	}

	printf("%d\n", sum - 1);

	exit(EXIT_SUCCESS);
}
