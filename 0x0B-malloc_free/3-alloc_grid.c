#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: first array
 * @height: second array
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * Return:grid
 */
int **alloc_grid(int width, int height)
{
	int Q = 0, R;

	if (width <= 0 || height <= 0)
		return (NULL);
	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	while (height > Q)
	{
		grid[Q] = malloc(width * sizeof(int));
		R = 0;
		if (grid[Q] == NULL)
		{
			while (R < Q)
			{	free(grid[R]);
				Q++;
				R++;
			}
			free(grid);
			Q++;
			return (NULL);
		}
		R = 0;
		while (width > R)
		{
			grid[Q][R] = 0;
			R++;
		}

	}
	return (grid);
}
