#include "main.h"
/**
 * _sqrt_recursion-a function that returns the
 * natural square root of a number.
 * @n: number
 * Return: square root of number
 */
int _sqrt(int Q, int R)
{
	int sqrt_rec = R * R;
	if (sqrt_rec == Q)
		return (R);
	if (sqrt_rec < Q)
		return (_sqrt(Q, R + 1));
	else
		return (-1);
}
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
