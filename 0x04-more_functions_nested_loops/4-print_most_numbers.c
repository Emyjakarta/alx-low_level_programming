#include "main.h"
/**
 * print_most_numbers-a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 * Return:void
 */
void print_most_numbers(void)
{
	int Q;

	for (Q = 0; Q <= 9; Q++)
	{
		if (Q != 2 && Q != 4)
			_putchar((Q % 10) + '0');
	}
	_putchar('\n');
}
