#include "main.h"
#include <stdlib.h>
/**
 * array_range-a function that creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 * Return:the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int Q;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	Q = min;
	while (max >= Q)
	{
		ptr[Q - min] = Q;
		Q++;
	}
	return (ptr);
}
