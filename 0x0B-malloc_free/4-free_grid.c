#include "main.h"
#include <stdlib.h>
/**
 * free_grid-a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: double pointer to second grid
 * @height: height
 * Note that we will compile with your
 * alloc_grid.c file. Make sure it compiles.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}
	int Q = 0;

	while (height > Q)
	{
		free(grid[Q]);
		Q++;
	}
	free(grid);
}
