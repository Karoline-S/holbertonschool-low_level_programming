#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of multiples of 3 or 5 up to and
 * excluding 1024.
 * Return: nothing
 */
int main(void)
{
	int sum = 0;
	int multi = 3;

	while (multi < 1024)
	{
		if (multi % 3 == 0 || multi % 5 == 0)
			sum = sum + multi;
		multi++;
	}
	printf("%d\n", sum);
	return (0);
}
