#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table to be deleted
 * Return: voi, does not return anything
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hold, *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hold = ht->array[i];
			while (hold != NULL)
			{
				temp = hold->next;
				free(hold->key);
				free(hold->value);
				free(hold);
				hold = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
