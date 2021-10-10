#include "hash_tables.h"
/**
 * key_index - Get key
 * @key: Key
 * @size: Size of array
 *
 * Return: Key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
