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
	hash_node_t *node;
	hash_node_t *new;
	char *n_value;
	char *n_key;
	unsigned long int index = key_index((unsigned char *) key, ht->size);

	if (strlen(key) == 0  || key == NULL)
		return (0);

	n_value = strdup(value);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = n_value;
			return (1);
		}
		node = node->next;
	}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		free(n_value);
		return (0);
	}

	n_key = strdup(key);
	new->key = n_key;
	new->value = n_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
