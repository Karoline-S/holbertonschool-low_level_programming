#include <unistd.h>
#include "main.h"

/**
 * timesTable - multiplies a given int by all digits from
 * 0-10 and prints the output with _putchar
 * @n: the int to multiply by
 * Return: void
 */

void timesTable(int n)
{
	int a;
	int result;

	a = 0;

	while (a <= 9)
	{
		result = n * a;
		if (a > 0 && result < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(result + '0');
		}
		else if (a > 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		else
		{
			_putchar(result + '0');
		}
		a = a + 1;
	}
	_putchar('\n');
}

/**
 * times_table - prints the timetables for a given number
 *
 * Return: void
 */

void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		timesTable(a);
		a = a + 1;
	}
	_putchar('\n');
}
