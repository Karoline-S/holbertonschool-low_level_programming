#include "main.h"

/**
 * print_triangle - prints a triangle with char
 * size specified by input variable
 * @size: automatic variable int
 * Return: void.
 */
void print_triangle(int size)
{
	int space;
	int hash;
	int count = 1;

	while (count <= size && size > 0)
	{
		space = (size - count);
		hash = (size - space);

		while (space > 0)
		{
			_putchar(' ');
			space = space - 1;
		}
		while (hash > 0)
		{
			_putchar('#');
			hash = hash - 1;
		}
		_putchar('\n');
		count = count + 1;
	}
	if (size == 0)
		_putchar('\n');
}
