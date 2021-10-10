#include "hash_tables.h"

/**
 * hash_table_create - Create table hash
 * @size: size of the array
 *
 * Return: Hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
	{
		return (NULL);
	}

	hash->size = size;

	hash->array = calloc(size, sizeof(hash_node_t *));

	return (hash);
}
