#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 *
 * @ht: the hash_table variable
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int j = 0;
	hash_node_t *hold;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hold = ht->array[i];
		if (hold != NULL)
			j++;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hold = ht->array[i];
		if (hold != NULL)
		{
			while (hold != NULL)
			{
				printf("\'%s\': \'%s\'", hold->key, hold->value);
				if ((*hold).next != NULL)
					printf(", ");
				hold = (*hold).next;
			}
			j--;
			if (j != 0)
				printf(", ");
			if (j == 0)
				break;
		}
	}
	printf("}\n");
}
