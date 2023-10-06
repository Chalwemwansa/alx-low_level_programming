#include "hash_tables.h"

/**
 * key_index - returns the index of the key
 *
 * @key: the key to use when getting the index
 * @size: the size of the hashtable
 * Return: an index`
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL)
		return (0);
	index = hash_djb2(key) % size;
	return (index);
}
