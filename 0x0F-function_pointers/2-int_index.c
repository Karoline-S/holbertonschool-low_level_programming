#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: ptr to the function to be used
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (!(cmp(array[i])))
			i++;

		else
			return (i);
	}
	return (-1);
}
