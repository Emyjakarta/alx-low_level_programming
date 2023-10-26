#include "main.h"
/**
 * clear_bit-a function that sets the 
 * value of a bit to 0 at a given index
 * @n: pointer to the unsigned long integer
 * @index: index of the bit to clear
 * Return: 1 if it works or -1 if error occors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _mask;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	_mask = 1UL << index;
	*n &= ~_mask;
	return (1);
}
