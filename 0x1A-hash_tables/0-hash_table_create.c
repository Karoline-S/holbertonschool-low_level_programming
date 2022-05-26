#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *array;

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(array) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = &array;

	return (table);
}
