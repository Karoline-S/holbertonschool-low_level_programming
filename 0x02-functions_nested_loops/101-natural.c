#include <stdio.h>
#include "main.h"

/**
 * print_sum_multiples - prints the sum of all mutliples of 3 or 5 up to a sum
 * less than 1024.
 * Return: nothing
 */
void print_sum_multiples(int n)
{
	int a = 0;
	int result;
	int sum = 0;

	while (sum < 950)
	{
		result = a * n;
		sum = sum + result;
		if (sum == 0)
			printf("%d", sum);
		else
			printf(", %d", sum);
		a++;
	}
	printf("\n");
}

/**
 * main - unsure how to describe this
 * Return: 0 for success.
 */
int main(void)
{
	print_sum_multiples(3);
	print_sum_multiples(5);
	return (0);
}
