#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers to stdout
 *
 * Return: 0 for success
 */
int main(void)
{
	int count = 3;

	long double fib1 = 1;
	long double fib2 = 2;
	long double fibPlus;

	printf("%.0Lf", fib1);
	printf(", %.0Lf", fib2);

	while (count < 99)
	{
		fibPlus = fib1 + fib2;
		printf(", %.0Lf", fibPlus);
		fib1 = fib2;
		fib2 = fibPlus;
		count++;
	}
	printf("\n");
	return (0);
}
