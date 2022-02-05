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
	int a1;
	int a2;

	a1 = '0';
	while (a1 <= '9')
	{
		a2 = a1 + 1;
		while (a2 <= '9')
		{
			putchar(a1);
			putchar(a2);

			if (a1 < '8')
			{
				putchar(',');
				putchar(' ');
			}
				a2 = a2 + 1;
		}
		a1 = a1 + 1;
	}
	putchar('\n');
	return (0);
}
