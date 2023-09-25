#include "main.h"
#include <stdio.h>
/**
 * print_diagsums-a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: array name
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int Q = 0;
	int add1 = 0;
	int add2 = 0;

	while (size > Q)
	{
		add1 += *(a + Q * size + Q);
		add2 += *(a + Q * size + (size - i - 1));
		Q++;
	}
	printf("Sum of the first diagonal = %i\n", add1);
	printf("Sum of the second diagonal = %i\n", add2);
}
