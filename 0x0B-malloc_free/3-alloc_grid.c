#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: number of columns in array
 * @height: number of rows in array
 *
 * Return: ptr to 2d array if successful, or NULL if not
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int w, h;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	h = 0;
	while (h < height)
	{
		array[h] = (int *) malloc(sizeof(int) * width);
		if (array[h] == NULL)
			return (NULL);
		h++;
	}

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			array[h][w] = 0;
			w++;
		}
		h++;
	}
	free(array[h]);
	return (array);
}
