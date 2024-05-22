#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not present in
 * array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, q;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (q = l; q < r; q++)
			printf("%d, ", array[q]);

		printf("%d\n", array[q]);

		mid = (l + r) / 2;

		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid); /* value found */
	}

	return (-1); /* value was not found in the array */
}
