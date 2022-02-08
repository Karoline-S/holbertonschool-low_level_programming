#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - short description here
 *
 * Description: long description here
 *
 * @r: describing here
 *
 * Return: explain what happens on return here
 */

int print_last_digit(int r)
{
	int i;

	if (r < 0)
		r = -r;

	i = r % 10;

	if (i < 0)
		i = -i;
	_putchar('0' + i);

	return (i);
}
