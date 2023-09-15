#include <stdio.h>
/**
 * main-program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 * You are allowed to use the standard library
 * Your program will be compiled with this command:
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89
 * 100-prime_factor.c -o 100-prime_factor -lm
 * Return:Always 0 (Success)
 */
int main(void)
{
	unsigned long Q = 612852475143;
	unsigned long prime;

	for (prime = 2; prime < Q; prime++)
	{
		if (Q % prime == 0)
		{
			Q /= prime;
		}
	}

	printf("%lu\n", prime);
	return (0);
}
