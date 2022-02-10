#include "main.h"

/**
 * print_square - prints a square of the
 * given size to stoutput
 * @size: automatic variable int
 * Return: void.
 */
void print_square(int size)
{
	int counta;
	int countb = 1;
	int across;

	while (countb <= size && size > 0)
	{
		counta = 0;
		across = size - counta;

		while (across > 0)
		{
			_putchar('#');
			across = across - 1;
		}
		_putchar('\n');
		across = size - counta;
		countb = countb + 1;
	}
	if (size <= 0)
		_putchar('\n');
}
