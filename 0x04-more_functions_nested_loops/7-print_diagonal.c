#include "main.h"

/**
 * print_diagonal - prints char to stoutput
 * @n: automatic variable int
 * Return: void.
 */
void print_diagonal(int n)
{
	int count = 1;
	int space;

	while (count <= n && n > 0)
	{
		space = count - 1;

		while (space > 0)
		{
			_putchar(' ');
			space = space - 1;
		}
		_putchar('\\');
		_putchar('\n');
		count = count + 1;
	}
	if (n <= 0)
		_putchar('\n');
}
