#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Defines main can only be called without any parameters
 *
 * Description: if variable is greater than zero
 * print positive
 * if else variable is equal to zero print zero
 * else print negative
 *
 * Return: what happens on return here
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
