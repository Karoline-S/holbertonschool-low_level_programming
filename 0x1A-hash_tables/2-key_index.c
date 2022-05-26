#include "hash_tables.h"

/**
 * key_index - gives the index for a key
 * @key: the key
 * @size: the size of the array
 * Return: the index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = hash_djb2(key) % size;

	return (idx);
}
