#include "function_pointers.h"
/**
 * int_index-a function that searches for an integer
 * @array: array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * int_index returns the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 * int *array, int size, int (*cmp)(int))
 * Return:Q
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int Q;

	if (array && cmp)
	{
		Q = 0;
		while (size > Q)
		{
			if (cmp(array[Q]) != 0)
				return (Q);
			Q++;
		}
	}
	return (-1);
}
