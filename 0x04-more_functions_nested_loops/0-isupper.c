#include "main.h"
#include <stdio.h>

/**
 * main - checking for uppercase char.
 *@c: automatice variable
 * Return: Always 1 if uppercase found or 0 if not.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		c = 1;
	else
		c = 0;
	return (c);
}
