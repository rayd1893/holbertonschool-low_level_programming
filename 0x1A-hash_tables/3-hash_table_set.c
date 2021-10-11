#include "hash_tables.h"

/**
 * hash_table_set - Add key and value in hash_table
 * @ht: Hash Table
 * @key: Key
 * @value: Value
 *
 * Return: Success or not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *) key, ht->size);

	if (key == "" || key == NULL)
		return (0);

	ht->array[index]->key = (char *)key;
	ht->array[index]->value = (char *)value;
	ht->array[index]->next = NULL;

	return (1);
}
