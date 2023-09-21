#include "main.h"
/**
 * reverse_array-a function that reverses
 * the content of an array of integers.
 * @a: array variable
 * @n: number of elements in array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int Q = 0;
	int R = n - 1;

	while (Q < R)
	{
		int temporal = a[Q];
		a[Q] = a[R];
		a[R] = temporal;
		Q++;
		R--;
	}


}
