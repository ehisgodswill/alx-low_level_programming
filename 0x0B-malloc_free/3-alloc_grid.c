#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
		while (j < width)
			ptr[i][j++] = 0;
		j = 0;
		i++;
	};
	return (ptr);
}
