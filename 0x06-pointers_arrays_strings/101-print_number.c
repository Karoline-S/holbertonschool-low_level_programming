#include "main.h"
#include <stdio.h>

int digit_len(int n)
{
	int count = 0;

	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	printf("This is digit len return: %d\n", count);
	return (count);
}

int myPow(int a)
{
	int p;
	int x = 1;

	while (a > 0)
	{
		p = 10 * x;
		x = x * 10;
		a--;
	}
	printf("This is myPow return: %d\n", p);
	return (p);
}
/**
 * *print_number - prints an int.
 * @s: the string to be encoded
 * Return: nothing.
 */
void print_number(int n)
{
	int a;
	int count = 0;
	int digit = n;

	a = (digit_len(n) - 1);

	_putchar ((digit / myPow(a)) + '0');
	a = a -1;
	digit = (digit / 10);

	while (digit / 10 != 0)
	{
		digit = (digit / (myPow(a))) / 10;
		count++;
		a--;
		_putchar(digit + '0');
	}
	_putchar((n % 10) + '0');
}
