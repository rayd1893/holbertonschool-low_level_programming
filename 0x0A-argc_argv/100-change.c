#include <stdio.h>
#include <stdlib.h>

/**
 * change - Number of coins
 * @amount: amount to change
 * Return: Number of coins
 */
int change(int amount)
{
	int coins = 0;
	int i;
	int values[5] = {25, 10, 5, 2, 1};

	if (amount < 0)
	{
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (!(amount % values[i]))
		{
			amount -= values[i];
			coins++;
			if (!amount)
			{
				return (coins);
			}
			i = 0;
		}
	}
	return (0);
}

/**
 * main - Main function
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int c;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	c = change(atoi(argv[1]));
	printf("%d\n", c);

	exit(EXIT_SUCCESS);
}
