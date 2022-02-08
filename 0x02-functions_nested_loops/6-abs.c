#include <unistd.h>
#include "main.h"

/**
 * _abs - short description here
 *
 * Description: long description here
 *
 * @r: describing here
 *
 * Return: explain what happens on return here
 */

int _abs(int r)
{
	int n;

	if (r < 0)
	{
		n = (r * (-1));
	}
	else
	{
		n = r;
	}
	return (n);
}
