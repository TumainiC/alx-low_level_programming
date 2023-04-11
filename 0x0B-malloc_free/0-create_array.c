#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes is with a specific char
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
		return (NULL);

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
