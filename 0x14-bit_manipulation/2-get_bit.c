#include "main.h"
/**
 * get_bit-returns the value of a bit at a given index
 * @n: the number in which to find the bit
 * @index: the index of the bit to get (0-based)
 * Return: the value of the bit at the given index
 * or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int _mask;
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	_mask = 1UL << index;
	bit = (n & _mask) ? 1 : 0;
	return (bit);
}
