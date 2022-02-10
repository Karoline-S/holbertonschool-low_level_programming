#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if variable is a digit
 * @c: automatic variable
 * Return: Always 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;
	return (c);
}
