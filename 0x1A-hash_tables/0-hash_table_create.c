#include "hash_tables.h"
/**
 * hash_table_create - function that creates an has table and initialises it to null
 *
 * @size: the size of the hash table
 * Return: a hash_table_t struct
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_t = malloc(sizeof(hash_table_t));
	
	if (new_t == NULL)
		return (NULL);
	new_t->size = size;
	new_t->array = malloc(sizeof(hash_node_t) * size);
	if (new_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}
