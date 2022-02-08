#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - short description here
 *
 * Description: long description here
 *
 * Return: explain what happens on return here
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
