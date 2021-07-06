#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @n: size of the matrix
 */
void print_diagsums(int *a, int n)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[(i * n) + i];
		sum1 += a[(n - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
