#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - short description here
 *
 * Description: long description here
 *
 * Return: explain what happens on return here
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c = c + 1;
		}
		a = a + 1;
		_putchar('\n');
	}
}
