#include "main.h"
/**
 * print_binary-a function that prints the binary
 * representation of a number
 * @n: number
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	int move = sizeof(n) * 8 - 1;
	int Q = 0;
	unsigned long int bit;

	while (move >= 0)
	{
		bit = (n >> move) & 1;
		if (Q == 0 && bit == 0 && move != 0)
		{
		}
		else
		{
			_putchar('0' + bit);
			Q++;
		}
		move--;
	}
	if (Q == 0)
	{
		_putchar('0');
	}
}
