#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers to stdout
 *
 * Return: 0 for success
 */
int main(void)
{
	int count = 2;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long fibPlus;

	printf("%ld", fib1);
	printf(", %ld", fib2);
	while (count < 50)
	{
		fibPlus = fib1 + fib2;
		printf(", %ld", fibPlus);
		fib1 = fib2;
		fib2 = fibPlus;
		count++;
	}
	printf("\n");
	return (0);
}
