#include <stdio.h>

/**
 * main - can only be called without any parameters
 *
 * Description: if variable is greater than zero
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
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
