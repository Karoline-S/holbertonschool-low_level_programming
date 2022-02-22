#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers to stdout
 *
 * Return: 0 for success
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long fibPlus;
	unsigned long fibCheck = 0;

	printf("%ld", fib2);
	while (fibCheck < 4000000)
	{
		fibPlus = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibPlus;
		fibCheck = fibPlus + fib1;
		if (fibPlus % 2 == 0)
			printf(", %ld", fibPlus);
	}
	printf("\n");
	return (0);
}
