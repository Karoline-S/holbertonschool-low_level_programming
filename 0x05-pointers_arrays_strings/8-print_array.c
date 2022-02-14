#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of n size stdout using printf
 * @a: the pointer to the array to be printed
 * @n: the size of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int arrayStart = 0;

	while (arrayStart < n)
	{
		printf("%d\n", a[arrayStart]);
		arrayStart++;
	}
}
