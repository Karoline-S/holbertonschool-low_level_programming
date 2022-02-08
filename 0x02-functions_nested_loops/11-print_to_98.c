#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - short description here
 *
 * @n: describing the declared variable here
 *
 * Return: explain what happens on return here
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n = n + 1;
		}
	}
	else
	{
		while (n > 97)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n = n - 1;
		}
	}
	printf("\n");
}
