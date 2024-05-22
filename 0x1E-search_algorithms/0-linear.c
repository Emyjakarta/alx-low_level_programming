#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t q;

	if (array == NULL)
		return (-1);

	for (q = 0; q < size; q++)
	{
		printf("Value checked array[%ld] = [%d]\n", q, array[q]);

		if (array[q] == value)
			return (q);
	}

	return (-1); /* value was not found in the array */
}
