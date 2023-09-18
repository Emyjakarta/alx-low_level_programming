#include "main.h"
/**
 * swap_int-a function that swaps the values of two integers.
 * @a: the first integer to be swapped.
 * @b: the second integer to be swapped.
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int Q = *a;
	*a = *b;
	*b = Q;
}
