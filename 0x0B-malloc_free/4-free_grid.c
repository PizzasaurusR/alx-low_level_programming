#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  free 2d matrix
 *
 * @grid: double pointer 2d matrix
 * @height: matrix height
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
