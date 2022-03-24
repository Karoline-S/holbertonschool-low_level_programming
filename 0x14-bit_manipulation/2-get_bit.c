#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer memory location to be checked
 * @index: the bit position to be checked
 * Return: the value of the bit position or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, idx, findStart;

	if (index > 31)
		return (-1);

	if (index == 0)
		return (n & 1);

	idx = 31;
	findStart = 0;
	bit = 0;

	while (idx > 0 && findStart == 0)
	{
		bit = (n >> idx) & 1;
		if (bit == 1)
			findStart = 1;
		else
			idx--;
	}

	if (index > idx)
		return (-1);

	bit = (n >> (index)) & 1;
	return (bit);
}
