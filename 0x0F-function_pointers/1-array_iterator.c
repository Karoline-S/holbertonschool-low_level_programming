#include "function_pointers.h"

/**
 * array_iterator - executes function from ptr in argument on each
 * element of an array
 * @array: the array to be operated on
 * @size: the size of the array
 * @action: ptr to the function to be used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;


	if (action == NULL || size <= 0)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
