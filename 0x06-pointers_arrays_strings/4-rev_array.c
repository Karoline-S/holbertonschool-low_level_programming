#include "main.h"

/**
 * reverse_array - reverses the order of the ints in an array
 * @a: the array to be reversed
 * @n: the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int hold;
	int count = 0;
	int arrayEnd;

	arrayEnd = count + (n - 1);

	while (count < (n / 2))
	{
		hold = *(a + count);
		*(a + count) = *(a + arrayEnd - count);
		*(a + arrayEnd - count) = hold;
		count++;
	}
}
