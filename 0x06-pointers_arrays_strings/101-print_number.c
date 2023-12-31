#include "main.h"
/**
 * print_number-a function that prints an integer.
 * @n: integer to be printed
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * Return:void
 */
void print_number(int n)
{
	unsigned int Q;

	if (n < 0)
	{
		Q = -n;
		_putchar('-');
	}
	else
	{
		Q = n;
	}
	if (Q / 10)
		print_number(Q / 10);
	_putchar((Q % 10) + 48);
}
