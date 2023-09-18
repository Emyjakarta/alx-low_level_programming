#include "main.h"
#include <stdio.h>
/**
 * print_array-a function that prints n
 * elements of an array of integers, followed by a new line.
 * @a: variable of the array.
 * @n: number of elements in the array.
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as
 * they are stored in the array
 * You are allowed to use printf
 * Return:void
 */
void print_array(int *a, int n)
{
	int Q;
	for (Q = 0; Q < n; Q++)
	{
		printf("%i", a[Q]);
		if (Q < n - 1)
		{
			printf(", ");
		}
		else
			printf("\n");
	}
}
