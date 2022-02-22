#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers to stdout
 *
 * Return: 0 for success
 */
int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long fibPlus;
	unsigned long fibCheck = 0;
	unsigned long sum = 2;

	while (fibCheck < 4000000)
	{
		fibPlus = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibPlus;
		fibCheck = fibPlus + fib1;
		if (fibPlus % 2 == 0)
			sum = sum + fibPlus;
	}
	printf("%ld\n", sum);
	return (0);
}
