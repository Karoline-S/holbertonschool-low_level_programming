#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the unsigned long int to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int idx, print, bit;

	print = 0;
	idx = 31;
	bit = 0;

	while (idx > 0 && print == 0)
	{
		bit = (n >> idx) & 1;
		if (bit == 1)
		{
			print = 1;
		}
		else
			idx--;
	}

	while (idx >= 0)
	{
		bit = (n >> idx) & 1;
		_putchar(bit + '0');
		idx--;
	}
}
