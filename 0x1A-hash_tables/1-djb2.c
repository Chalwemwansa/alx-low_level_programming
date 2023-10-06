#include "hash_tables.h"

/**
 * hash_djb2 - hash function to be used in the code
 *
 * @str: the string passed as parameter
 * Return: an unsigned long int value\
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while (c = *str++)
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
