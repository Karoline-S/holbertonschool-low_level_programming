#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hashtable without memory leaks
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);

	free(array);
	free(ht);
}

/**
 * free_list - frees a linked list of hash_node_t's
 * @head: the head of the list
 * Return: Nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *next;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = next;
	}
}
