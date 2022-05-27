#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = array;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * add_node - adds a node to the start of a hash_node_t linked list
 * @array: an array of pointers to hash_node_t's
 * @idx: the index in array for the new node
 * Return: the address of the new node or NULL for failure
 */
hash_node_t *add_node(hash_node_t **array, unsigned long int idx)
{
	hash_node_t *head = array[idx];

	if (head == NULL)
	{
		head = malloc(sizeof(*head));
		if (head == NULL)
			return (NULL);

		head->next = NULL;
		array[idx] = head;

		return (head);
	}

	head = malloc(sizeof(*head));
	if (head == NULL)
		return (NULL);

	head->next = array[idx];
	array[idx] = head;

	return (head);
}
