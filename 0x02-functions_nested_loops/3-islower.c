#include <unistd.h>
#include "main.h"

/**
 * _islower - short description here
 *
 * Description: long description here
 *
 *@c: describing here
 *
 * Return: explain what happens on return here
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
