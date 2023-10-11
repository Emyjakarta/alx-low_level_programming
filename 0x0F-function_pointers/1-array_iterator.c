#include "function_pointers.h"
/**
 * array_iterator-a function that executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t Q = 0;

	while (size > Q)
	{
		action(array[Q]);
		Q++;
	}
}
