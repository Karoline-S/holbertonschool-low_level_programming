#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from a hashtable
 * @ht: the table
 * @key: the key corresponding to the value
 * Return: value stored at key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *key_list;

	if (ht == NULL || ht->array == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);

	key_list = ht->array[idx];

	while (key_list != NULL)
	{
		if (strcmp(key_list->key, key) == 0)
			return (key_list->value);
		key_list = key_list->next;
	}

	return (NULL);
}
