#include <stdio.h>

/**
 * main - prints 0-100 except numbers divisible by 3 and/or
 * 5 print word
 * Return: void
 */
int main(void)
{
	int n = 1;

	while (n < 101)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf(" FizzBuzz");
		else if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else if (n > 1)
			printf(" %d", n);
		else
			printf("%d", n);
		n = n + 1;
	}
	printf("\n");
	return (0);
}
