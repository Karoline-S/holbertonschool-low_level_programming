#include <stdio.h>

/**
 * main - prints all combinations of two two digit numbers to 99
 *
 * Return: 1 on success;
 */
int main(void)
{
	int a = 0;
	int b;

	while (a <= 99)
	{
		b = 0;

		while (b <= 99)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b = b + 1;
		}
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
