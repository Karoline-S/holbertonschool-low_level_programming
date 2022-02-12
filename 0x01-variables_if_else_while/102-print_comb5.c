#include <stdio.h>

/**
 * main - prints the timestable of n.
 *
 * Return: 1 on success;
 */
int main(void)
{
	int a = 0;
	int b;
	int c;
	int d;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			c = a;

			while (c <= 9)
			{
				d = b + 1;

				while (d <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');

					if (!(a == 9 && b == 8))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
