#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width size of array
 * @height: number of rows
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i = 0, j = 0, k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < height)
	{
		i++;
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (--i >= 0)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ptr[j][k] = 0;
	}
	return (ptr);
}
