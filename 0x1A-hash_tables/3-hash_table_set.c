#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add or update value for
 * @key: the key to get value from the hash table
 * @value: value associated with the key
 * Return: 1 if succesful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *hold;

	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);
	hold = ht->array[index];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (hold == NULL)
	{
		new_node->key = strdup((char *)key);
		new_node->value = strdup((char *)value);
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	while (hold != NULL)
	{
		if (_strcmp(hold->key, (char *)key) == 0)
		{
			free(new_node);
			free(hold->value);
			hold->value = strdup((char *)value);
			return (1);
		}
		hold = (*hold).next;
	}
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * _strcmp - compares two strings
 *
 * @str1: the first string
 * @str2: the second string
 * Return: 1 if not equal
 */
int _strcmp(char *str1, char *str2)
{
	unsigned long int i = 0;

	while (str2[i] && str1[i])
	{
		if (str1[i] != str2[i])
			return (1);
		if (str1[i] == '\0' && str2[i] != '\0')
			return (1);
		if (str2[i] == '\0' && str1[i] != '\0')
			return (1);
		i++;
	}
	if (str2[i] == '\0' && str1[i] != '\0')
		return (1);
	if (str1[i] == '\0' && str2[i] != '\0')
		return (1);
	return (0);
}
