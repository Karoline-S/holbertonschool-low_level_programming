#include "main.h"

/**
 * swap_int - swap the value of two int variables using pointers
 * @a: the first pointer to be used
 * @b: the second pointer to be used
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
