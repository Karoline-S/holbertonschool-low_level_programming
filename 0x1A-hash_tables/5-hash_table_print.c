#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hashtable
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int start = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			print_list(ht->array[i], start);
			start = 1;
		}
	}
	printf("}\n");
}

/**
 * print_list - prints a linked list
 * @list: the list to be printed
 * @start: an int indicationg whether this is the first key to be printed
 * Return: nothing
 */
void print_list(hash_node_t *list, int start)
{
	while (list != NULL)
	{
		if (start == 0)
			printf("\'%s\': \'%s\'", list->key, list->value);
		else
			printf(", \'%s\': \'%s\'", list->key, list->value);
		list = list->next;
	}
}
