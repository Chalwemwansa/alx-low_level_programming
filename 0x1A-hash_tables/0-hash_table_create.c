#include "hash_tables.h"
/**
 * hash_table_create - function that creates an hash table
 *
 * @size: the size of the hash table
 * Return: a hash_table_t struct
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t = malloc(sizeof(hash_table_t));

	if (new_t == NULL)
		return (NULL);
	new_t->size = size;

	new_t->array = calloc(sizeof(hash_table_t *), new_t->size);
	if (new_t->array == NULL)
		return (NULL);

	return (new_t);
}
