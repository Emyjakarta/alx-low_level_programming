#include "main.h"
/**
 * print_numbers-a function that prints the numbers,
 * from 0 to 9, followed by a new line
 * You can only use _putchar twice in your code
 * Return:void
 */
void print_numbers(void)
{
	int Q;

	for (Q = 0; Q <= 9; Q++)
	{
		_putchar(Q);
	}
	_putchar('\n');
}
