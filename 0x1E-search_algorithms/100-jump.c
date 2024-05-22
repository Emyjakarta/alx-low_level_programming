#include "search_algos.h"

/**
 * do_linear_search - function that searches for
 * a value in a sorted array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * @fmr: previous index
 * @jump: jump index
 *
 * Return: index where value is located, or -1 on failure
 */
int do_linear_search(int *array, size_t size, int value, size_t fmr,
						  size_t jump)
{
	while (array[fmr] < value && fmr < size)
	{
		print_value_checked(array, fmr);
		if (fmr == MIN(jump, size))
			return (-1);

		fmr++;
	}

	if (array[fmr] == value)
	{
		print_value_checked(array, fmr);
		return (fmr);
	}

	return (-1);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t fmr, jump;

	if (array == NULL || size == 0)
		return (-1);

	fmr = 0;
	jump = sqrt(size);

	print_value_checked(array, fmr);
	while (array[MIN(jump, size) - 1] < value)
	{
		fmr = jump;
		jump += sqrt(size);

		/* Check if the value does not exist in the array */
		if (jump >= size)
		{
			print_value_checked(array, fmr);
			break;
		}

		print_value_checked(array, fmr);

		/*
		 * Once the target value is found either
		 * at the start or end
		 * of block size.
		 * Do linear search to find the exact index
		 */
		if (array[fmr] == value || array[jump] == value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", fmr, jump);

	return (do_linear_search(array, size, value, fmr, jump));
}
