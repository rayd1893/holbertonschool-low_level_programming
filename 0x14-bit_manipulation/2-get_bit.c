#include "main.h"
/**
 * get_bit - Get position of bit
 * @n: number
 * @index: Position
 *
 * Return: Bit in position index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index) % 2)
		return (1);

	else
		return (0);
}
