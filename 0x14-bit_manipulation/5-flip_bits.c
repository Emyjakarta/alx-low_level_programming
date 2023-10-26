#include "main.h"
/**
 * flip_bits-a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 * you are allowed to use % or / operators
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_flipped_bits = n ^ m;
	unsigned int Q = 0;

	while (xor_flipped_bits)
	{
		if (xor_flipped_bits & 1)
		{
			Q++;
		}
		xor_flipped_bits >>= 1;
	}
	return (Q);
}
