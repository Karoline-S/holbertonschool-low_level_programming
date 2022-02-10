#include "main.h"

/**
 * more_numbers - prints char to stoutput
 *
 * Return: void.
 */
void more_numbers(void)
{
	int a;
	int b;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (a = '0'; a <= '9'; a++)
			_putchar(a);
		for (b = '0'; b <= '4'; b++)
		{
			_putchar('1');
			_putchar(b);
		}
		_putchar('\n');
	}
}
