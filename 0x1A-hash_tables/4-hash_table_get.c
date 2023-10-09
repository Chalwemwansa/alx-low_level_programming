#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 *
 * @ht: the variable for the hash table
 * @key: the key for the value
 * Return: a value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hold;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	hold = ht->array[index];

	while (hold != NULL)
	{
		if (strcmp((char *)key, (ht->array[index])->key) == 0)
			return ((ht->array[index])->value);
		hold = (*hold).next;
	}
	return (NULL);
}
