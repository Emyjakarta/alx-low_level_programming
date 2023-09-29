#include "main.h"
/**
 * is_divisib-a function that recursively checks if n is
 * divisible by any number starting from Q down to 2
 * @n: number to be checked
 * @Q: divisor
 * Return:0 if Q == 1, else return 1
 */
int is_divisib(int n, int Q)
{
	if (Q == 1)
		return (0);
	if (n % Q == 0)
		return (1);
	return (is_divisib(n, Q - 1));
}
/**
 * is_prime_number- a function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: number to be checked
 * Return:1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (!is_divisib(n, n - 1));
}
