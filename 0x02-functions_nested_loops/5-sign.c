#include <unistd.h>
#include "main.h"

/**
 * print_sign - short description here
 *
 * Description: long description here
 *
 *@n: describing here
 *
 * Return: explain what happens on return here
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
