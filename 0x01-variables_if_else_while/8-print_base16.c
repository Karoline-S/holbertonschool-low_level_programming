#include <stdio.h>

/**
 * main - Defines main can only be called without any parameters
 *
 * Description: if variable is greater than zero
 * print positive
 * if else variable is equal to zero print zero
 * else print negative
 *
 * Return: what happens on return here
 */

int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i = i + 1;
	}

	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
