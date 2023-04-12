#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - create 2d  arr of ints
 * @width: width of arr
 * @height: height of arr
 *
 * Return: pointer to matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **matrix, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		matrix[x] = malloc(width * sizeof(int));
		if (matrix[x] == NULL)
		{
			while (x >= 0)
			{
				free(matrix[x]);
				x--;
			}

			free(matrix);
			return (NULL);
		}

		for (y = 0; y < width; y++)
			matrix[x][y] = 0;
	}
	return (matrix);
}
