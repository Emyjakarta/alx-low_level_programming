#include "main.h"
/**
 * set_bit-sets the value of a bit at a given index to 1
 * @n: pointer to the unsigned long integer to modify
 * @index: index (starting from 0) of the bit to set to 1
 * Return: 1 if it works or -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	_mask = 1UL << index;
	*n = *n | _mask;
	return (1);
}
