#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "mentioner", "cool");
    hash_table_set(ht, "hetairas", "coolest");
    hash_table_set(ht, "betty", "bad");
    hash_table_set(ht, "betty", "cool");
    hash_table_set(NULL, "bettyy", "cool");
    return (EXIT_SUCCESS);
}
