#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumber - Validate number
 * @s: String
 * Return: 1 is number else 0
 */
int isnumber(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
		{
			return (0);
		}
		s++;
	}

	return (1);
}

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

	if (!isnumber(argv[1]))
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}

	c = change(atoi(argv[1]));
	printf("%d\n", c);

	exit(EXIT_SUCCESS);
}
