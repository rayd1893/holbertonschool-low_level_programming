#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Main function
 *
 * Return: Last number
 */
int main(void)
{
	int n;
	int x;
	int r;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = (n / 10) * 10;
	r = n - x;

	if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}

	else if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}

	return (0);
}
