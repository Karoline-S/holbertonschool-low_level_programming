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
	int i;

	if (c > 96 && c < 123)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
