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
 * Return:ptr
 */
int **alloc_grid(int width, int height)
{
	int Q = 0, R;
	int **ptr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	while (height > Q)
	{
		ptr[Q] = malloc(width * sizeof(int));
		R = 0;
		if (ptr[Q] == NULL)
		{
			while (R < Q)
			{	free(ptr[R]);
				R++;
			}
			free(ptr);
			return (NULL);
		}
		R = 0;
		while (width > R)
		{
			ptr[Q][R] = 0;
			R++;
		}
		Q++;
	}
	return (ptr);
}
