#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers,
 * NULL if failure, if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int *arr, x, y;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);
	if (arr == 0)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);

		if (arr[x] == NULL)
		{
			while (x <= 0)
				free(arr[x]);
				x--;
				return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	return (arr);
}
