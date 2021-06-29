#include "holberton.h"

/**
 * swap_int - Swaps the values
 * @a: change to b
 * @b: change to a
 *
 * Return: Swaps the values
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
