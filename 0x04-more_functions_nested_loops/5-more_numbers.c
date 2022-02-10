#include "main.h"

/**
 * more_numbers - prints char to stoutput
 *
 * Return: void.
 */
void more_numbers(void)
{
	int a;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar('1');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
