#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints char to stoutput
 *
 * Return: Always 1 if digit, 0 otherwise.
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
