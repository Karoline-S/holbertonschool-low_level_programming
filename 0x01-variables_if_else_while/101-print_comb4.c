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
	int a3;

	a1 = '0';
	while (a1 <= '9')
	{
		a2 = a1 + 1;
		while (a2 <= '9')
		{
			a3 = a2 + 1;
			while (a3 <= '9')
			{
				putchar(a1);
				putchar(a2);
				putchar(a3);

				if (a1 < '7')
				{
					putchar(',');
					putchar(' ');
				}
				a3 = a3 + 1;
			}
			a2 = a2 + 1;
		}
		a1 = a1 + 1;
	}
	putchar('\n');
	return (0);
}
