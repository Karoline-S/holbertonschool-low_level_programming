#include <unistd.h>
#include "main.h"

/**
 * _isalpha - short description here
 *
 * Description: long description here
 *
 *@c: describing here
 *
 * Return: explain what happens on return here
 */

int _isalpha(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
