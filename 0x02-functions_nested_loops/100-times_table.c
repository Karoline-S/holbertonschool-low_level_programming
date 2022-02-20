#include <unistd.h>
#include "main.h"

/**
 * multiplier - prints the timestable for a given int using _putchar
 * @num: the integer timestable to be printed
 * Return: void
 */
void multiplier(int num)
{
	int a, b, result;

	a = 0;
	while (a <= num)
	{
		b = 0;
		while (b <= num)
		{
			result = a * b;
			if (b == 0)
				_putchar(result + '0');
			else if (result >= 0 && result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result > 9 && result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			b = b + 1;
		}
		_putchar('\n');
		a = a + 1;
	}
}

/**
 * print_times_table - prints the timetables for a given number
 * @n: number of timestable to be printed
 * Return: void
 */

void print_times_table(int n)
{

	if (n >= 0 && n <= 15)
		multiplier(n);
	else
		_putchar('\n');
}
