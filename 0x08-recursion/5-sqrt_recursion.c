#include "main.h"
/**
 * _sqrt-a function that calculates the square root
 * of a number recursively
 * @Q: number for which we want to find the square root
 * @R: number that compares Q. It starts at 1 and is used in
 * the recursive calculation
 * Return: square root of number or -1 if it's not a
 * perfect square
 */
int _sqrt(int Q, int R)
{
	int sqrt_rec = R * R; /*calculate the square of current R*/

	if (sqrt_rec == Q) /*if R squared == Q, return R as square root*/
		return (R);
	if (sqrt_rec < Q) /*if R squared < Q, recall _sqrt*/
		return (_sqrt(Q, R + 1));
	else /*if R squared > Q, Q isn't a perfect square, return -1*/
		return (-1);
}
/**
 * _sqrt_recursion-a wrapper function that returns the
 * natural square root of a number. it calls _sqrt
 * @n: number for which we want to find the square root
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
