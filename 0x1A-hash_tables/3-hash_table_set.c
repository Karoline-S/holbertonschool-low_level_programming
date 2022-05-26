#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds data to the hash table at index
 * @ht: pointer to the hash table receiving data
 * @key: a string containing the unique key
 * @value: the value to be stored with the key
 *
 * Description: uses closed address chaining in case of collision
 * new nodes are added to the start of a linked list
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *position = NULL;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	position = ht->array[idx];

	while (position != NULL)
	{
		if (position->key == key)
		{
			free(position->value);
			position->value = strdup(value);
			return (1);
		}
		position = position->next;
	}

	position = add_node(ht->array, idx);
	if (position == NULL)
	{
		free_hash_table(ht);
		return (0);
	}

	position->key = (char *)key;
	position->value = strdup(value);

	return (1);
}
