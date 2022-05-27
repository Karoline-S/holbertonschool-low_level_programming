#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hashtable without memory leaks
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	free_hash_table(ht);
}
