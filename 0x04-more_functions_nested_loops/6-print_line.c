#include "main.h"

/**
 * print_line - prints char to stoutput
 * @n: automatic variable int
 * Return: void.
 */
void print_line(int n)
{
	while (n > 0)
	{
		n--;
		_putchar('_');
	}
	_putchar('\n');
}
